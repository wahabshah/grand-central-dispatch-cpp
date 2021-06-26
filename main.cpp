//g++ main.cpp -ldispatch -o main && ./main
#include <dispatch/dispatch.h>
#include <type_traits>
#include <future>
#include <functional>

#include <iostream>

template<class Function, class... Args>
auto async(Function&& f, Args&&... args){
   using result_type = std::result_of_t<std::decay_t<Function>(std::decay_t<Args>...)>;
   using packaged_type = std::packaged_task<result_type()>;

   auto _p = new packaged_type(std::bind( [_f = std::forward<Function>(f)](Args&... args){
       return _f(std::move(args)...);
   }, std::forward<Args>(args)...));
   auto result = _p->get_future();
   dispatch_async_f(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT,0),
       _p, [](void* p){
           auto _p = static_cast<packaged_type*>(p);
           (*_p)();
           delete _p;
       });

    return result;      
}

int main(){
    auto res1 = async( [](){
        std::cout << "hi" << std::endl;
        return 1;
    });
    auto futureVal = res1.get();
    std::cout << futureVal << std::endl;

}