Avariadic function is a function with indefinite number of arguments
we declare a variadic function by inserting ... after the last known argument
you declare an argument pointer of type va_list
and use va_start to initialize the pointer to the first argument in the list
you use va_arg to make pointer to point to the next argument
and use va_end to free a va_list
you can use va_copy to copy contents of one va_list to another
