# MakeFile_FirstMeet
gcc windows mingw32-make Makefile_FirstMeet
usage：
1. install MinGW in windows and set ENV_VARIABLE：{MinGW<D:\MinGW>;PATH<...;%MinGW%\bin>}
2. install git-windows or directly use WIN+R type:CMD
3. enters the code dir, right click, use command: mingw32-make and waiting for a moment
4. then ./main to execute it
5. finish.
# result：
``` c
$ mingw32-make
gcc -c main.c
gcc -c PrintHello.c
gcc -c PrintWorld.c
gcc -o main main.o PrintHello.o PrintWorld.o
$ ./main
hello..? said the PrintHello_SPrint
                                        world.. said the PrintWorld_SPrint
```
