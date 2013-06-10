/*
   Exercise 1-20
   Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int max);
void detab(char line[], int cols);

main() 
{
   int len = 0;
   char line[MAXLINE];
   
   while ((len = mygetline(line, MAXLINE)) > 1 ) {
      detab(line, 2);
      printf("%s\n", line);
   }
   
}

int mygetline(char line[], int max) 
{
   char c;
   int i = 0;
   for (i; i<max && ((c=getchar()) != EOF && c != '\n'); i++) {
      line[i] = c;
   }
   line[++i] = '\0';
   return i;
}

void detab(char line[], int cols)
{
   int i, j, k=0;
   char c;
   char s = ' ';
   char templine[MAXLINE];
   
   for (i; (c=line[i]) != '\0'; i++) {
      if (c == '\t')
         for (j=0; j<cols; j++) {
            templine[k++] = s;
         }
      else
         templine[k++] = c;
   }
   line = templine;
}