#!/bin/bash
if [ ! -d  "build" ];then
   mkdir build
else
   rm -rf build
   mkdir build
fi
cd build
echo "Begin compiling"
cmake .. -G"MinGW Makefiles" -DCMAKE_INSTALL_PREFIX=../ \
         -DCMAKE_C_COMPILER=D:/"program files"/tdmgcc_64/bin/gcc.exe \
         -DCMAKE_CXX_COMPILER=D:/"program files"/tdmgcc_64/bin/g++.exe

cmake --build .
cmake --install . --prefix ../
# if you work on the linux, you can type 'make && make install' directly
cd ..