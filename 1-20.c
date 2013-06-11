/*
   Exercise 1-20
   Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>
#define MAXLINE 1000
#define COLUMNS 4

int mygetline(char line[], int max);
void detab(char buf[], char line[], int cols);

main() 
{
   int len = 0;
   char buffer[MAXLINE];
   char line[MAXLINE];
   
   while ((len = mygetline(buffer, MAXLINE)) > 1 ) {
      detab(buffer, line, COLUMNS);
         printf("%s\n", line);
   }
   
}

int mygetline(char buf[], int max) 
{
   char c;
   int i = 0;
   for (i; i<max && ((c=getchar()) != EOF && c != '\n'); i++) {
      buf[i] = c;
   }
   buf[i] = '\0';
   return i;
}

void detab(char buf[], char line[], int cols)
{
   int i, j, k;
   i = j = k = 0;
   char c;
   char space = ' ';
   
   for (i; k<MAXLINE && (c=buf[i]) != '\0'; i++) {
      if (c == '\t') {
         for (j=0; j<cols; j++) {
            line[k++] = space;
         }
      }
      else
         line[k++] = c;
   }
   line[k] = '\0';
}