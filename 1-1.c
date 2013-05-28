/* 
 Exercise 1-1
 Run "Hello World" program on your system. Experiment with leaving out parts
 of the program, to see what error messages you get

 Exercise 1-2
 Experiment to find out what happens when printf's argument string contains \c, where c is 
 some characters not listed above.

  compile with:     gcc 1-1.c -o 1-1 
*/

#include <stdio.h>

main()
{
   printf("hello, ");
   printf("world");
   printf("\n");
} 