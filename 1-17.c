/*
   Exercise 1-17
   Write a program to print all input lines that are longer than 80 characters
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int mygetline(char line[], int maxline);

main()
{  
   int len;
   len = 0;
   char line[MAXLINE];  // array to hold input line
   
   while ((len = mygetline(line, MAXLINE)) > 1) {
      if (len >= 80)
         printf("=>%d: %s\n", len, line);
   }
}

/* mygetline: copy input line into line[], return length of line */
int mygetline(char line[], int maxline)
{
   int i, c;
   i = 0;
   
   for (i; i<maxline && (c=getchar()) !=EOF && c != '\n'; i++) {
      line[i] = c;
   }
   line[i++] = '\0';
   return i;
}