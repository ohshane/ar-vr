/* 
 * https://cmake.org/cmake/help/latest/guide/tutorial/index.html
 * 
 * from lib     -> #include <filename.h>
 * from current -> #include "filename.h"
 * from current -> #include "dir/filename.h"
 *
 * c:   .h
 * cpp: .hpp
 * 
 * <Preprocessors>
 * #include:    just like copying the file to the #include line
 * 
 * #define DEBUG_MODE   -> define with capital letters
 * #define PI 3.141592
 * #define square(x) ((x) * (x)) 
 * #undef PI
 * 
 * macro types (#define Real float) vs. typedef (typedef Real float;)
 * macro var                        vs. const var
 * macro func                       vs. inline func  
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("Hello, World\n");
    return 0;
}