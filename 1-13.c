/*
   Exercise 1-13
   write a program to print a histogram of the lengths of words in its input. 
*/

#include <stdio.h>

main()
{
   int c, i, j, len;
   len = 0;
   int nwords[15];
   for (i = 0; i<15; i++)
      nwords[i] = 0;
   
   while ((c = getchar()) != EOF) {
      if (c == ' ' || c == '\t' || c == '\n') {
         if (len > 15)
            len = 15;
         ++nwords[len];
         len = 0;
      }
      else {
         len++;
      }
   }
   printf("num of words = ");
   for(i = 0; i<15; i++)
      printf(" %d", nwords[i]);
   printf("\n\n");
   
   for(i = 1; i<15; i++) {
      printf(" ");
      for(j=0; j<nwords[i]; j++) {
         printf("|");
      }
      printf("\n");
   }
   printf("\n");
}