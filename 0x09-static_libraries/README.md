Creating static file using previous functions
To create a static library, we use:
ar -rc libmane.a *.o
to index we use
ranlib libname.a
to use static lib:
gcc main.c -L. -lname -o main
