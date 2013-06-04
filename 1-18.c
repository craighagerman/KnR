/*
   Exercise 1-18
   Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines
*/

#include <stdio.h>
#define MAXLINE 1000


int mygetline(char line[], int max);
int chomp(char line[], int len);

main()
{
   int len = 0;
   int newlen = 0;
   char line[MAXLINE];
   
   while((len = mygetline(line, MAXLINE)) > 1 ) {
      newlen = chomp(line, len);
      printf("Len: %d-%d, \n -%s-\n", len, newlen, line);
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


int chomp(char line[], int len) 
{  
   int i = len-1;
   for(i; i >=0 && (line[i]=='\0' || line[i]==' ' || line[i]=='\t'); i--)
      ;  
   if (i<1)
      i = 0;
  line[++i] = '\0';
   return i;
}
