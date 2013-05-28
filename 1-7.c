/*
   Exercise 1-7
   write a program to count blanks, tabs and newlines
*/

#include <stdio.h>

main()
{
   int c, nl;
   
   nl = 0;
   while ((c = getchar()) != EOF)
      if ((c == ' ') || (c == '\t') || (c == '\n'))
         ++nl;
   printf(" %d \n", nl);
}