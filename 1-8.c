/*
   Exercise 1-8
   write a program to copy its input to its output, replacing each string of one or more 
   blanks by a single blank
*/

#include <stdio.h>

main()
{
   int c, blank;
   blank = 0;
   
   while(( c = getchar()) != EOF)
      if (c != ' ') {
         putchar(c);
         blank = 0;
      }
      else if ((c == ' ') && (blank == 0)){
         putchar(c);
         blank++;
      }

}