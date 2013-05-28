/*
   Exercise 1-6
   File Copying
   Verify that the expression getchar() != EOF is 0 or 1

*/

#include <stdio.h>

/* copy input to output */
main()
{
   int c;
   
   // version 1
   /*
   c = getchar();
   while (c != EOF) {
      putchar(c);
      c = getchar();
      }
   */
   
   // version 2
   while ((c = getchar()) != EOF) {
      putchar(c);
   }
}