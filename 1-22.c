/*
   1-22	Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n -th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.
   
*/

#include <stdio.h>

#define MAXLINE 1000
#define LINELEN 12

main()
{
   char buffer[MAXLINE];
   int len = 0;
   int i;
   
   while((len = mygetline(buffer, MAXLINE)) > 1) {
      printf("%s\n", buffer);
   }
   
}

int mygetline(char line[], int max) 
{
   char c;
   int i = 0;
   for (i; i<LINELEN && (c = getchar()) != EOF && c != '\n'; i++) {
      line[i] = c;
   }
   line[++i] = '\0';
   return i;
}