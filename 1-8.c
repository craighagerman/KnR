/*
   Exercise 1-8
   write a program to count blanks, tabs and newlines
*/

#include <stdio.h>

main()
{
   int c, nl;
   nl = 0;
   
   while(( c = getchar()) != EOF)
      if ((c == ' ') || (c =='\n') || (c == '\t'))
         ++nl;
   printf("%d\n", nl);
}