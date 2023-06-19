Dynamic libraries are loaded in memory
(stored as addresses)
to create a dynamic library use:
gcc -c -fPIC
-c: generates object files from source files
-fPIC: make the code position independent
to put together object files into one library:
gcc -shared -o libname.so *.o
to verify if you created the lib
nm -D libname

How to use it:
add the location of your lib files into the environmental variable LD_LIBRARY_PATH
then compile it:
gcc -L .o -main.c -l all -o example
-L: where to find the lib, in this case: .
-l: tell compiler to look for the library
all: name given to the lib
