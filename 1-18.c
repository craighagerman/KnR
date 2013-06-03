/*
   Exercise 1-18
   Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines
*/

#include <stdio.h>
#define MAXLINE 1000


int mygetline(char line[], int max);
void chomp(char[] line);

main()
{
   int len = 0;
   char line[MAXLINE];
   
   while((len = mygetline(line, MAXLINE)) > 1 ) {
      printf("%s \n", chomp(line));
   }
}


int mygetline(char line[], int max) 
{
   int i = 0;
   char c;
   for (i; i<max && ((c=getchar()) != '\n' && c != EOF); i++) {
      line[i] = c;   
   }
   line[i++] = '\0';
   return i;
}


void chomp(char[] line) 
{
   for (int i = 0; line[i] != '\0'; i++) {
      if (line[i] == ' ' && line[i] == '\t') {
         line[i] = '-';
      }
   }
   
}
