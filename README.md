# Motivation

<a href="https://gitpod.io/#https://github.com/wahabshah/grand-central-dispatch-cpp" rel="nofollow noopener noreferrer" target="_blank" class="after:hidden"><img src="https://gitpod.io/button/open-in-gitpod.svg" alt="Open in Gitpod"></a>

# Grand Central Dispatch

* https://github.com/microsoft/vscode-dev-containers/issues/544
* https://github.com/microsoft/vscode-dev-containers/blob/main/script-library/docs/common.md
* https://youtu.be/zULU6Hhp42w?t=2420
* https://www.debian.org/releases/
* https://github.com/apple/swift-corelibs-libdispatch/blob/34f383d34450d47dd5bdfdf675fcdaa0d0ec8031/dispatch/dispatch.h
* https://github.com/apple/swift-corelibs-libdispatch/blob/34f383d34450d47dd5bdfdf675fcdaa0d0ec8031/tests/dispatch_io_pipe.c
* https://medium.com/siliconwat/how-javascript-async-await-works-3cab4b7d21da

```sh
.
├── .devcontainer
│   ├── base.Dockerfile
│   ├── devcontainer.json
│   └── library-scripts
│       ├── common-debian.sh
│       ├── meta.env
│       └── README.md
├── main.cpp
├── README.md
└── .vscode
    └── settings.json
```



### stable
The current `stable` distribution of Debian is `version 10`, codenamed `buster`. It was initially released as version 10 on July 6th, 2019 and its latest update, version 10.10, was released on June 19th, 2021.

### testing
The current `testing` distribution is `bullseye`.

### unstable
The `unstable` distribution is always called `sid`.


https://packages.debian.org/sid/amd64/libdispatch-dev/filelist

/usr/include/dispatch/base.h
/usr/include/dispatch/dispatch.h
/usr/include/dispatch/group.h
/usr/include/dispatch/object.h
/usr/include/dispatch/once.h
/usr/include/dispatch/queue.h
/usr/include/dispatch/semaphore.h
/usr/include/dispatch/source.h
/usr/include/dispatch/time.h

/usr/lib/libdispatch.a
/usr/lib/libdispatch.so
lrwxrwxrwx 1 root root 20 Mar 21  2014 /usr/lib/libdispatch.so -> libdispatch.so.0.0.0


https://packages.debian.org/sid/amd64/libdispatch0/filelist

/usr/lib/libdispatch.so.0
lrwxrwxrwx 1 root root 20 Mar 21  2014 /usr/lib/libdispatch.so.0 -> libdispatch.so.0.0.0
/usr/lib/libdispatch.so.0.0.0
-rw-r--r-- 1 root root 52K Mar 21  2014 /usr/lib/libdispatch.so.0.0.0


https://developer.apple.com/documentation/DISPATCH



ldconfig -n /usr/lib


```sh
vscode ➜ /workspaces/swift-corelibs-libdispatch $ sudo apt install libdispatch-dev
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following additional packages will be installed:
  binfmt-support binutils binutils-common binutils-x86-64-linux-gnu clang clang-11 fontconfig-config fonts-dejavu-core lib32gcc-s1 lib32stdc++6 libasan6 libatomic1 libbinutils libblocksruntime-dev
  libblocksruntime0 libc-dev-bin libc-devtools libc6-dev libc6-i386 libclang-common-11-dev libclang-cpp11 libclang1-11 libcrypt-dev libctf-nobfd0 libctf0 libdeflate0 libdispatch0 libffi-dev libfontconfig1
  libfreetype6 libgc1 libgcc-10-dev libgd3 libgomp1 libitm1 libjbig0 libjpeg62-turbo libkqueue-dev libkqueue0 libllvm11 liblsan0 libncurses-dev libnsl-dev libobjc-10-dev libobjc4 libomp-11-dev libomp5-11
  libpfm4 libpng16-16 libpthread-workqueue-dev libpthread-workqueue0 libquadmath0 libstdc++-10-dev libtiff5 libtinfo-dev libtirpc-dev libtsan0 libubsan1 libwebp6 libx11-6 libx11-data libxau6 libxcb1 libxdmcp6
  libxpm4 libyaml-0-2 libz3-4 libz3-dev linux-libc-dev llvm-11 llvm-11-dev llvm-11-runtime llvm-11-tools python3-pkg-resources python3-pygments python3-yaml sensible-utils ucf
Suggested packages:
  binutils-doc clang-11-doc glibc-doc libgd-tools ncurses-doc libomp-11-doc libstdc++-10-doc llvm-11-doc python3-setuptools python-pygments-doc ttf-bitstream-vera
The following NEW packages will be installed:
  binfmt-support binutils binutils-common binutils-x86-64-linux-gnu clang clang-11 fontconfig-config fonts-dejavu-core lib32gcc-s1 lib32stdc++6 libasan6 libatomic1 libbinutils libblocksruntime-dev
  libblocksruntime0 libc-dev-bin libc-devtools libc6-dev libc6-i386 libclang-common-11-dev libclang-cpp11 libclang1-11 libcrypt-dev libctf-nobfd0 libctf0 libdeflate0 libdispatch-dev libdispatch0 libffi-dev
  libfontconfig1 libfreetype6 libgc1 libgcc-10-dev libgd3 libgomp1 libitm1 libjbig0 libjpeg62-turbo libkqueue-dev libkqueue0 libllvm11 liblsan0 libncurses-dev libnsl-dev libobjc-10-dev libobjc4 libomp-11-dev
  libomp5-11 libpfm4 libpng16-16 libpthread-workqueue-dev libpthread-workqueue0 libquadmath0 libstdc++-10-dev libtiff5 libtinfo-dev libtirpc-dev libtsan0 libubsan1 libwebp6 libx11-6 libx11-data libxau6 libxcb1
  libxdmcp6 libxpm4 libyaml-0-2 libz3-4 libz3-dev linux-libc-dev llvm-11 llvm-11-dev llvm-11-runtime llvm-11-tools python3-pkg-resources python3-pygments python3-yaml sensible-utils ucf
0 upgraded, 79 newly installed, 0 to remove and 0 not upgraded.
```



```sh
$ ldconfig -p
264 libs found in cache `/etc/ld.so.cache'
        libz3.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libz3.so.4
        libz3.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libz3.so
        libzstd.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libzstd.so.1
        libz.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libz.so.1
        libyaml-0.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libyaml-0.so.2
        libxxhash.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libxxhash.so.0
        libxtables.so.12 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libxtables.so.12
        libxcb.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libxcb.so.1
        libwebp.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libwebp.so.6
        libuuid.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libuuid.so.1
        libutil.so.1 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libutil.so.1
        libutil.so.1 (libc6, OS ABI: Linux 3.2.0) => /lib32/libutil.so.1
        libutil.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libutil.so
        liburcu.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu.so.6
        liburcu-signal.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu-signal.so.6
        liburcu-qsbr.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu-qsbr.so.6
        liburcu-memb.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu-memb.so.6
        liburcu-mb.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu-mb.so.6
        liburcu-common.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu-common.so.6
        liburcu-cds.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu-cds.so.6
        liburcu-bp.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liburcu-bp.so.6
        libunwind.so.8 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libunwind.so.8
        libunwind-x86_64.so.8 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libunwind-x86_64.so.8
        libunwind-ptrace.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libunwind-ptrace.so.0
        libunwind-coredump.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libunwind-coredump.so.0
        libunistring.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libunistring.so.2
        libudev.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libudev.so.1
        libuchardet.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libuchardet.so.0
        libubsan.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libubsan.so.1
        libtsan.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libtsan.so.0
        libtirpc.so.3 (libc6,x86-64) => /lib/x86_64-linux-gnu/libtirpc.so.3
        libtirpc.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libtirpc.so
        libtinfo.so.6 (libc6,x86-64) => /lib/x86_64-linux-gnu/libtinfo.so.6
        libtinfo.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libtinfo.so
        libtiff.so.5 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libtiff.so.5
        libtic.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libtic.so.6
        libtic.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libtic.so
        libthread_db.so.1 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libthread_db.so.1
        libthread_db.so.1 (libc6, OS ABI: Linux 3.2.0) => /lib32/libthread_db.so.1
        libthread_db.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libthread_db.so
        libtasn1.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libtasn1.so.6
        libsystemd.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libsystemd.so.0
        libstdc++.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libstdc++.so.6
        libstdc++.so.6 (libc6) => /usr/lib32/libstdc++.so.6
        libssl.so.1.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libssl.so.1.1
        libssh2.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libssh2.so.1
        libss.so.2 (libc6,x86-64) => /lib/x86_64-linux-gnu/libss.so.2
        libsqlite3.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libsqlite3.so.0
        libsmartcols.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libsmartcols.so.1
        libsepol.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libsepol.so.1
        libsemanage.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libsemanage.so.1
        libselinux.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libselinux.so.1
        libseccomp.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libseccomp.so.2
        libsasl2.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libsasl2.so.2
        librtmp.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/librtmp.so.1
        librt.so.1 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/librt.so.1
        librt.so.1 (libc6, OS ABI: Linux 3.2.0) => /lib32/librt.so.1
        librt.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/librt.so
        libresolv.so.2 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libresolv.so.2
        libresolv.so.2 (libc6, OS ABI: Linux 3.2.0) => /lib32/libresolv.so.2
        libresolv.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libresolv.so
        libreadline.so.8 (libc6,x86-64) => /lib/x86_64-linux-gnu/libreadline.so.8
        libquadmath.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libquadmath.so.0
        libp11-kit.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libp11-kit.so.0
        libpthread_workqueue.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpthread_workqueue.so.0
        libpthread_workqueue.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpthread_workqueue.so
        libpthread.so.0 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libpthread.so.0
        libpthread.so.0 (libc6, OS ABI: Linux 3.2.0) => /lib32/libpthread.so.0
        libpthread.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libpthread.so
        libpsl.so.5 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpsl.so.5
        libprocps.so.8 (libc6,x86-64) => /lib/x86_64-linux-gnu/libprocps.so.8
        libpopt.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpopt.so.0
        libpng16.so.16 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpng16.so.16
        libpipeline.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpipeline.so.1
        libpfm.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpfm.so.4
        libperl.so.5.32 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libperl.so.5.32
        libpcre2-8.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpcre2-8.so.0
        libpcreposix.so.3 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpcreposix.so.3
        libpcre.so.3 (libc6,x86-64) => /lib/x86_64-linux-gnu/libpcre.so.3
        libpcprofile.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libpcprofile.so
        libpcprofile.so (libc6, OS ABI: Linux 3.2.0) => /lib32/libpcprofile.so
        libpanelw.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpanelw.so.6
        libpanelw.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpanelw.so
        libpanel.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpanel.so.6
        libpanel.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libpanel.so
        libpamc.so.0 (libc6,x86-64) => /lib/x86_64-linux-gnu/libpamc.so.0
        libpam_misc.so.0 (libc6,x86-64) => /lib/x86_64-linux-gnu/libpam_misc.so.0
        libpam.so.0 (libc6,x86-64) => /lib/x86_64-linux-gnu/libpam.so.0
        libopcodes-2.35.2-system.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libopcodes-2.35.2-system.so
        libonig.so.5 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libonig.so.5
        libomp.so.5 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libomp.so.5
        libobjc_gc.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libobjc_gc.so.4
        libobjc.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libobjc.so.4
        libnuma.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libnuma.so.1
        libnss_hesiod.so.2 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libnss_hesiod.so.2
        libnss_hesiod.so.2 (libc6, OS ABI: Linux 3.2.0) => /lib32/libnss_hesiod.so.2
        libnss_hesiod.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libnss_hesiod.so
        libnss_files.so.2 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libnss_files.so.2
        libnss_files.so.2 (libc6, OS ABI: Linux 3.2.0) => /lib32/libnss_files.so.2
        libnss_files.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libnss_files.so
        libnss_dns.so.2 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libnss_dns.so.2
        libnss_dns.so.2 (libc6, OS ABI: Linux 3.2.0) => /lib32/libnss_dns.so.2
        libnss_dns.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libnss_dns.so
        libnss_compat.so.2 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libnss_compat.so.2
        libnss_compat.so.2 (libc6, OS ABI: Linux 3.2.0) => /lib32/libnss_compat.so.2
        libnss_compat.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libnss_compat.so
        libnsl.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libnsl.so.2
        libnsl.so.1 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libnsl.so.1
        libnsl.so.1 (libc6, OS ABI: Linux 3.2.0) => /lib32/libnsl.so.1
        libnsl.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libnsl.so
        libnpth.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libnpth.so.0
        libnl-3.so.200 (libc6,x86-64) => /lib/x86_64-linux-gnu/libnl-3.so.200
        libnl-genl-3.so.200 (libc6,x86-64) => /lib/x86_64-linux-gnu/libnl-genl-3.so.200
        libnghttp2.so.14 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libnghttp2.so.14
        libnettle.so.8 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libnettle.so.8
        libncursesw.so.6 (libc6,x86-64) => /lib/x86_64-linux-gnu/libncursesw.so.6
        libncurses.so.6 (libc6,x86-64) => /lib/x86_64-linux-gnu/libncurses.so.6
        libmvec.so.1 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libmvec.so.1
        libmvec.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libmvec.so
        libmpfr.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmpfr.so.6
        libmpdec.so.3 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmpdec.so.3
        libmpdec++.so.3 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmpdec++.so.3
        libmpc.so.3 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmpc.so.3
        libmount.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmount.so.1
        libmnl.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmnl.so.0
        libmenuw.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmenuw.so.6
        libmenuw.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmenuw.so
        libmenu.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmenu.so.6
        libmenu.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmenu.so
        libmemusage.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libmemusage.so
        libmemusage.so (libc6, OS ABI: Linux 3.2.0) => /lib32/libmemusage.so
        libmd.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libmd.so.0
        libm.so.6 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libm.so.6
        libm.so.6 (libc6, OS ABI: Linux 3.2.0) => /lib32/libm.so.6
        liblz4.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblz4.so.1
        liblzma.so.5 (libc6,x86-64) => /lib/x86_64-linux-gnu/liblzma.so.5
        liblttng-ust.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust.so.0
        liblttng-ust-tracepoint.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-tracepoint.so.0
        liblttng-ust-pthread-wrapper.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-pthread-wrapper.so.0
        liblttng-ust-libc-wrapper.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-libc-wrapper.so.0
        liblttng-ust-fork.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-fork.so.0
        liblttng-ust-fd.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-fd.so.0
        liblttng-ust-dl.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-dl.so.0
        liblttng-ust-cyg-profile.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-cyg-profile.so.0
        liblttng-ust-cyg-profile-fast.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-cyg-profile-fast.so.0
        liblttng-ust-ctl.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblttng-ust-ctl.so.4
        liblsan.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblsan.so.0
        libldap_r-2.4.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libldap_r-2.4.so.2
        liblber-2.4.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/liblber-2.4.so.2
        libk5crypto.so.3 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libk5crypto.so.3
        libksba.so.8 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libksba.so.8
        libkrb5support.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libkrb5support.so.0
        libkrb5.so.3 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libkrb5.so.3
        libkqueue.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libkqueue.so.0
        libkqueue.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libkqueue.so
        libkeyutils.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libkeyutils.so.1
        libjq.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libjq.so.1
        libjpeg.so.62 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libjpeg.so.62
        libjbig.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libjbig.so.0
        libitm.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libitm.so.1
        libisl.so.23 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libisl.so.23
        libidn2.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libidn2.so.0
        libicuuc.so.67 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicuuc.so.67
        libicuuc.so.63 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicuuc.so.63
        libicutu.so.67 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicutu.so.67
        libicutu.so.63 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicutu.so.63
        libicutest.so.67 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicutest.so.67
        libicutest.so.63 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicutest.so.63
        libicui18n.so.67 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicui18n.so.67
        libicui18n.so.63 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicui18n.so.63
        libicuio.so.67 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicuio.so.67
        libicuio.so.63 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicuio.so.63
        libicudata.so.67 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicudata.so.67
        libicudata.so.63 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libicudata.so.63
        libhogweed.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libhogweed.so.6
        libhistory.so.8 (libc6,x86-64) => /lib/x86_64-linux-gnu/libhistory.so.8
        libgssapi_krb5.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgssapi_krb5.so.2
        libgpg-error.so.0 (libc6,x86-64) => /lib/x86_64-linux-gnu/libgpg-error.so.0
        libgomp.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgomp.so.1
        libgnutls.so.30 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgnutls.so.30
        libgmp.so.10 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgmp.so.10
        libgdbm_compat.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgdbm_compat.so.4
        libgdbm.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgdbm.so.6
        libgd.so.3 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgd.so.3
        libgcrypt.so.20 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgcrypt.so.20
        libgccpp.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgccpp.so.1
        libgcc_s.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libgcc_s.so.1
        libgcc_s.so.1 (libc6) => /usr/lib32/libgcc_s.so.1
        libgc.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libgc.so.1
        libfreetype.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libfreetype.so.6
        libformw.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libformw.so.6
        libformw.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libformw.so
        libform.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libform.so.6
        libform.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libform.so
        libfontconfig.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libfontconfig.so.1
        libfido2.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libfido2.so.1
        libffi.so.7 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libffi.so.7
        libffi.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libffi.so
        libfakeroot-0.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libfakeroot/libfakeroot-0.so
        libe2p.so.2 (libc6,x86-64) => /lib/x86_64-linux-gnu/libe2p.so.2
        libext2fs.so.2 (libc6,x86-64) => /lib/x86_64-linux-gnu/libext2fs.so.2
        libexpatw.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libexpatw.so.1
        libexpat.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libexpat.so.1
        libelf.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libelf.so.1
        libedit.so.2 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libedit.so.2
        libdl.so.2 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libdl.so.2
        libdl.so.2 (libc6, OS ABI: Linux 3.2.0) => /lib32/libdl.so.2
        libdl.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libdl.so
        libdispatch.so.0 (libc6,x86-64) => /usr/lib/libdispatch.so.0
        libdispatch.so (libc6,x86-64) => /usr/lib/libdispatch.so
        libdeflate.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libdeflate.so.0
        libdebconfclient.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libdebconfclient.so.0
        libdb-5.3.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libdb-5.3.so
        libcurl.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libcurl.so.4
        libcurl-gnutls.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libcurl-gnutls.so.4
        libctf.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libctf.so.0
        libctf-nobfd.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libctf-nobfd.so.0
        libcrypto.so.1.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libcrypto.so.1.1
        libcrypt.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libcrypt.so.1
        libcrypt.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libcrypt.so
        libcom_err.so.2 (libc6,x86-64) => /lib/x86_64-linux-gnu/libcom_err.so.2
        libclang-11.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libclang-11.so.1
        libclang-cpp.so.11 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libclang-cpp.so.11
        libcc1.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libcc1.so.0
        libcbor.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libcbor.so.0
        libcap.so.2 (libc6,x86-64) => /lib/x86_64-linux-gnu/libcap.so.2
        libcap-ng.so.0 (libc6,x86-64) => /lib/x86_64-linux-gnu/libcap-ng.so.0
        libc.so.6 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libc.so.6
        libc.so.6 (libc6, OS ABI: Linux 3.2.0) => /lib32/libc.so.6
        libbz2.so.1.0 (libc6,x86-64) => /lib/x86_64-linux-gnu/libbz2.so.1.0
        libbsd.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libbsd.so.0
        libbrotlienc.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libbrotlienc.so.1
        libbrotlidec.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libbrotlidec.so.1
        libbrotlicommon.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libbrotlicommon.so.1
        libbpf.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libbpf.so.0
        libblkid.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libblkid.so.1
        libbfd-2.35.2-system.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libbfd-2.35.2-system.so
        libaudit.so.1 (libc6,x86-64) => /lib/x86_64-linux-gnu/libaudit.so.1
        libattr.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libattr.so.1
        libatomic.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libatomic.so.1
        libassuan.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libassuan.so.0
        libasan.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libasan.so.6
        libapt-private.so.0.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libapt-private.so.0.0
        libapt-pkg.so.6.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libapt-pkg.so.6.0
        libanl.so.1 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libanl.so.1
        libanl.so.1 (libc6, OS ABI: Linux 3.2.0) => /lib32/libanl.so.1
        libanl.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libanl.so
        libacl.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libacl.so.1
        libX11.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libX11.so.6
        libXpm.so.4 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libXpm.so.4
        libXdmcp.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libXdmcp.so.6
        libXau.so.6 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libXau.so.6
        libSegFault.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libSegFault.so
        libSegFault.so (libc6, OS ABI: Linux 3.2.0) => /lib32/libSegFault.so
        libLLVM-11.so.1 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libLLVM-11.so.1
        libLLVM-11.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libLLVM-11.so
        libBrokenLocale.so.1 (libc6,x86-64, OS ABI: Linux 3.2.0) => /lib/x86_64-linux-gnu/libBrokenLocale.so.1
        libBrokenLocale.so.1 (libc6, OS ABI: Linux 3.2.0) => /lib32/libBrokenLocale.so.1
        libBrokenLocale.so (libc6,x86-64, OS ABI: Linux 3.2.0) => /usr/lib/x86_64-linux-gnu/libBrokenLocale.so
        libBlocksRuntime.so.0 (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libBlocksRuntime.so.0
        libBlocksRuntime.so (libc6,x86-64) => /usr/lib/x86_64-linux-gnu/libBlocksRuntime.so
        ld-linux.so.2 (ELF) => /lib32/ld-linux.so.2
        ld-linux.so.2 (ELF) => /lib/ld-linux.so.2
        ld-linux-x86-64.so.2 (libc6,x86-64) => /lib/x86_64-linux-gnu/ld-linux-x86-64.so.2
```

```sh
vscode ➜ /workspaces/swift-corelibs-libdispatch $ sudo ldconfig -v
ldconfig: Can't stat /usr/local/lib/x86_64-linux-gnu: No such file or directory
ldconfig: Path `/lib/x86_64-linux-gnu' given more than once
ldconfig: Path `/usr/lib/x86_64-linux-gnu' given more than once
/usr/lib/x86_64-linux-gnu/libfakeroot:
        libfakeroot-0.so -> libfakeroot-tcp.so
/usr/local/lib:
/lib/x86_64-linux-gnu:
        libncursesw.so.6 -> libncursesw.so.6.2
        libhistory.so.8 -> libhistory.so.8.1
        libreadline.so.8 -> libreadline.so.8.1
        libexpat.so.1 -> libexpat.so.1.6.12
        libprocps.so.8 -> libprocps.so.8.0.3
        libncurses.so.6 -> libncurses.so.6.2
        libcap.so.2 -> libcap.so.2.44
        libnl-3.so.200 -> libnl-3.so.200.26.0
        libnl-genl-3.so.200 -> libnl-genl-3.so.200.26.0
        libSegFault.so -> libSegFault.so
        libnss_files.so.2 -> libnss_files-2.31.so
        libthread_db.so.1 -> libthread_db-1.0.so
        libc.so.6 -> libc-2.31.so
        libutil.so.1 -> libutil-2.31.so
        libBrokenLocale.so.1 -> libBrokenLocale-2.31.so
        libnss_hesiod.so.2 -> libnss_hesiod-2.31.so
        libm.so.6 -> libm-2.31.so
        libsepol.so.1 -> libsepol.so.1
        libpthread.so.0 -> libpthread-2.31.so
        liblzma.so.5 -> liblzma.so.5.2.5
        libnsl.so.1 -> libnsl-2.31.so
        libext2fs.so.2 -> libext2fs.so.2.4
        libcom_err.so.2 -> libcom_err.so.2.1
        libgpg-error.so.0 -> libgpg-error.so.0.29.0
        libdl.so.2 -> libdl-2.31.so
        libz.so.1 -> libz.so.1.2.11
        libpcprofile.so -> libpcprofile.so
        libresolv.so.2 -> libresolv-2.31.so
        libgcc_s.so.1 -> libgcc_s.so.1
        libmemusage.so -> libmemusage.so
        libanl.so.1 -> libanl-2.31.so
        libpamc.so.0 -> libpamc.so.0.82.1
        libbz2.so.1.0 -> libbz2.so.1.0.4
        libnss_compat.so.2 -> libnss_compat-2.31.so
        libmvec.so.1 -> libmvec-2.31.so
        libselinux.so.1 -> libselinux.so.1
        libtirpc.so.3 -> libtirpc.so.3.0.0
        libnss_dns.so.2 -> libnss_dns-2.31.so
        libcrypt.so.1 -> libcrypt.so.1.1.0
        libe2p.so.2 -> libe2p.so.2.3
        libpam_misc.so.0 -> libpam_misc.so.0.82.1
        libaudit.so.1 -> libaudit.so.1.0.0
        libpam.so.0 -> libpam.so.0.85.1
        libtinfo.so.6 -> libtinfo.so.6.2
ldconfig: /lib/x86_64-linux-gnu/ld-2.31.so is the dynamic linker, ignoring

        ld-linux-x86-64.so.2 -> ld-2.31.so
        libkeyutils.so.1 -> libkeyutils.so.1.9
        libcap-ng.so.0 -> libcap-ng.so.0.0.0
        libss.so.2 -> libss.so.2.0
        librt.so.1 -> librt-2.31.so
        libpcre.so.3 -> libpcre.so.3.13.3
/usr/lib/x86_64-linux-gnu:
        libbrotlidec.so.1 -> libbrotlidec.so.1.0.9
        librtmp.so.1 -> librtmp.so.1
        libnghttp2.so.14 -> libnghttp2.so.14.20.1
        libsasl2.so.2 -> libsasl2.so.2.0.25
        libpsl.so.5 -> libpsl.so.5.3.2
        libbrotlicommon.so.1 -> libbrotlicommon.so.1.0.9
        libbrotlienc.so.1 -> libbrotlienc.so.1.0.9
        libssh2.so.1 -> libssh2.so.1.0.1
        libcurl.so.4 -> libcurl.so.4.7.0
        libksba.so.8 -> libksba.so.8.13.0
        libnpth.so.0 -> libnpth.so.0.1.2
        libmenuw.so.6 -> libmenuw.so.6.2
        libformw.so.6 -> libformw.so.6.2
        libassuan.so.0 -> libassuan.so.0.8.4
        libsqlite3.so.0 -> libsqlite3.so.0.8.6
        libpanelw.so.6 -> libpanelw.so.6.2
        libunwind-ptrace.so.0 -> libunwind-ptrace.so.0.0.0
        libnuma.so.1 -> libnuma.so.1.0.0
        libicutu.so.63 -> libicutu.so.63.2
        libcbor.so.0 -> libcbor.so.0.0.0
        libbsd.so.0 -> libbsd.so.0.11.3
        liburcu-mb.so.6 -> liburcu-mb.so.6.1.0
        libicuuc.so.67 -> libicuuc.so.67.1
        liburcu-signal.so.6 -> liburcu-signal.so.6.1.0
        libpanel.so.6 -> libpanel.so.6.2
        libldap_r-2.4.so.2 -> libldap_r-2.4.so.2.11.5
        libmnl.so.0 -> libmnl.so.0.2.0
        libmpdec.so.3 -> libmpdec.so.2.5.1
        libicuio.so.67 -> libicuio.so.67.1
        liburcu-bp.so.6 -> liburcu-bp.so.6.1.0
        libunwind.so.8 -> libunwind.so.8.0.1
        liblttng-ust-fork.so.0 -> liblttng-ust-fork.so.0.0.0
        liblttng-ust-ctl.so.4 -> liblttng-ust-ctl.so.4.0.0
        liblttng-ust-dl.so.0 -> liblttng-ust-dl.so.0.0.0
        libicui18n.so.67 -> libicui18n.so.67.1
        liblttng-ust.so.0 -> liblttng-ust.so.0.0.0
        libunwind-coredump.so.0 -> libunwind-coredump.so.0.0.0
        libmpdec++.so.3 -> libmpdec++.so.2.5.1
        liburcu.so.6 -> liburcu.so.6.1.0
        libicutu.so.67 -> libicutu.so.67.1
        libuchardet.so.0 -> libuchardet.so.0.0.7
        libjq.so.1 -> libjq.so.1.0.4
        liblttng-ust-fd.so.0 -> liblttng-ust-fd.so.0.0.0
        liburcu-common.so.6 -> liburcu-common.so.6.1.0
        liblttng-ust-cyg-profile-fast.so.0 -> liblttng-ust-cyg-profile-fast.so.0.0.0
        liblttng-ust-libc-wrapper.so.0 -> liblttng-ust-libc-wrapper.so.0.0.0
        libicudata.so.63 -> libicudata.so.63.2
        libmd.so.0 -> libmd.so.0.0.4
        libform.so.6 -> libform.so.6.2
        libicutest.so.63 -> libicutest.so.63.2
        libonig.so.5 -> libonig.so.5.1.0
        libbpf.so.0 -> libbpf.so.0.3.0
        libexpatw.so.1 -> libexpatw.so.1.6.12
        libelf.so.1 -> libelf-0.183.so
        libfido2.so.1 -> libfido2.so.1.6.0
        libpopt.so.0 -> libpopt.so.0.0.1
        libicutest.so.67 -> libicutest.so.67.1
        libunwind-x86_64.so.8 -> libunwind-x86_64.so.8.0.1
        liburcu-cds.so.6 -> liburcu-cds.so.6.1.0
        liblber-2.4.so.2 -> liblber-2.4.so.2.11.5
        libgdbm.so.6 -> libgdbm.so.6.0.0
        liburcu-qsbr.so.6 -> liburcu-qsbr.so.6.1.0
        libgdbm_compat.so.4 -> libgdbm_compat.so.4.0.0
        libicuio.so.63 -> libicuio.so.63.2
        libpipeline.so.1 -> libpipeline.so.1.5.3
        liblttng-ust-tracepoint.so.0 -> liblttng-ust-tracepoint.so.0.0.0
        libcurl-gnutls.so.4 -> libcurl-gnutls.so.4.7.0
        libmenu.so.6 -> libmenu.so.6.2
        libedit.so.2 -> libedit.so.2.0.63
        liblttng-ust-cyg-profile.so.0 -> liblttng-ust-cyg-profile.so.0.0.0
        liburcu-memb.so.6 -> liburcu-memb.so.6.1.0
        libicuuc.so.63 -> libicuuc.so.63.2
        libperl.so.5.32 -> libperl.so.5.32.1
        liblttng-ust-pthread-wrapper.so.0 -> liblttng-ust-pthread-wrapper.so.0.0.0
        libicudata.so.67 -> libicudata.so.67.1
        libicui18n.so.63 -> libicui18n.so.63.2
        libxtables.so.12 -> libxtables.so.12.4.0
        libdeflate.so.0 -> libdeflate.so.0
        libasan.so.6 -> libasan.so.6.0.0
        libobjc_gc.so.4 -> libobjc_gc.so.4.0.0
        libkqueue.so.0 -> libkqueue.so.0
        libLLVM-11.so.1 -> libLLVM-11.0.1.so.1
        libisl.so.23 -> libisl.so.23.0.0
        libgd.so.3 -> libgd.so.3.0.8
        libopcodes-2.35.2-system.so -> libopcodes-2.35.2-system.so
        libz3.so.4 -> libz3.so.4
        libobjc.so.4 -> libobjc.so.4.0.0
        libpfm.so.4 -> libpfm.so.4.11.1
        libitm.so.1 -> libitm.so.1.0.0
        libfontconfig.so.1 -> libfontconfig.so.1.12.0
        libclang-11.so.1 -> libclang-11.so.1
        libjbig.so.0 -> libjbig.so.0
        libfreetype.so.6 -> libfreetype.so.6.17.4
        libtsan.so.0 -> libtsan.so.0.0.0
        libmpfr.so.6 -> libmpfr.so.6.1.0
        libjpeg.so.62 -> libjpeg.so.62.3.0
        libmpc.so.3 -> libmpc.so.3.2.0
        libgomp.so.1 -> libgomp.so.1.0.0
        libBlocksRuntime.so.0 -> libBlocksRuntime.so.0.0.0
        libctf-nobfd.so.0 -> libctf-nobfd.so.0.0.0
        libXdmcp.so.6 -> libXdmcp.so.6.0.0
        libpthread_workqueue.so.0 -> libpthread_workqueue.so.0.0.0
        libomp.so.5 -> libomp5.so
        libatomic.so.1 -> libatomic.so.1.2.0
        libubsan.so.1 -> libubsan.so.1.0.0
        libgccpp.so.1 -> libgccpp.so.1.4.0
        libquadmath.so.0 -> libquadmath.so.0.0.0
        libcc1.so.0 -> libcc1.so.0.0.0
        libyaml-0.so.2 -> libyaml-0.so.2.0.6
        liblsan.so.0 -> liblsan.so.0.0.0
        libpng16.so.16 -> libpng16.so.16.37.0
        libctf.so.0 -> libctf.so.0.0.0
        libtiff.so.5 -> libtiff.so.5.6.0
        libgc.so.1 -> libgc.so.1.4.3
        libX11.so.6 -> libX11.so.6.4.0
        libxcb.so.1 -> libxcb.so.1.1.0
        libXpm.so.4 -> libXpm.so.4.11.0
        libbfd-2.35.2-system.so -> libbfd-2.35.2-system.so
        libXau.so.6 -> libXau.so.6.0.0
        libwebp.so.6 -> libwebp.so.6.0.2
        libhogweed.so.6 -> libhogweed.so.6.4
        libpcre2-8.so.0 -> libpcre2-8.so.0.10.1
        libsemanage.so.1 -> libsemanage.so.1
        libp11-kit.so.0 -> libp11-kit.so.0.3.0
        libidn2.so.0 -> libidn2.so.0.3.7
        libgssapi_krb5.so.2 -> libgssapi_krb5.so.2.2
        libnettle.so.8 -> libnettle.so.8.4
        libgcrypt.so.20 -> libgcrypt.so.20.2.8
        libblkid.so.1 -> libblkid.so.1.1.0
        libacl.so.1 -> libacl.so.1.1.2253
        libapt-pkg.so.6.0 -> libapt-pkg.so.6.0.0
        libgmp.so.10 -> libgmp.so.10.4.1
        libuuid.so.1 -> libuuid.so.1.3.0
        libapt-private.so.0.0 -> libapt-private.so.0.0.0
        libkrb5.so.3 -> libkrb5.so.3.3
        libxxhash.so.0 -> libxxhash.so.0.8.0
        libmount.so.1 -> libmount.so.1.1.0
        libstdc++.so.6 -> libstdc++.so.6.0.28
        libk5crypto.so.3 -> libk5crypto.so.3.1
        libdb-5.3.so -> libdb-5.3.so
        libcrypto.so.1.1 -> libcrypto.so.1.1
        libssl.so.1.1 -> libssl.so.1.1
        libsystemd.so.0 -> libsystemd.so.0.30.0
        libzstd.so.1 -> libzstd.so.1.4.8
        libunistring.so.2 -> libunistring.so.2.1.0
        libtasn1.so.6 -> libtasn1.so.6.6.0
        libkrb5support.so.0 -> libkrb5support.so.0.1
        libsmartcols.so.1 -> libsmartcols.so.1.1.0
        libffi.so.7 -> libffi.so.7.1.0
        libattr.so.1 -> libattr.so.1.1.2448
        libgnutls.so.30 -> libgnutls.so.30.29.1
        libdebconfclient.so.0 -> libdebconfclient.so.0.0.0
        libpcreposix.so.3 -> libpcreposix.so.3.13.3
        libseccomp.so.2 -> libseccomp.so.2.5.1
        libnsl.so.2 -> libnsl.so.2.0.1
        libtic.so.6 -> libtic.so.6.2
        liblz4.so.1 -> liblz4.so.1.9.3
        libudev.so.1 -> libudev.so.1.7.0
/lib32:
        libSegFault.so -> libSegFault.so
        libnss_files.so.2 -> libnss_files-2.31.so
        libthread_db.so.1 -> libthread_db-1.0.so
        libc.so.6 -> libc-2.31.so
        libutil.so.1 -> libutil-2.31.so
        libBrokenLocale.so.1 -> libBrokenLocale-2.31.so
        libnss_hesiod.so.2 -> libnss_hesiod-2.31.so
        libm.so.6 -> libm-2.31.so
        libpthread.so.0 -> libpthread-2.31.so
        libnsl.so.1 -> libnsl-2.31.so
        libdl.so.2 -> libdl-2.31.so
        libpcprofile.so -> libpcprofile.so
        libresolv.so.2 -> libresolv-2.31.so
        libmemusage.so -> libmemusage.so
        libanl.so.1 -> libanl-2.31.so
        libnss_compat.so.2 -> libnss_compat-2.31.so
        libnss_dns.so.2 -> libnss_dns-2.31.so
ldconfig: /lib32/ld-2.31.so is the dynamic linker, ignoring

        ld-linux.so.2 -> ld-2.31.so
        librt.so.1 -> librt-2.31.so
/usr/lib32:
        libgcc_s.so.1 -> libgcc_s.so.1
        libstdc++.so.6 -> libstdc++.so.6.0.28
/lib:
/usr/lib:
        libdispatch.so.0 -> libdispatch.so.0.0.0
```
