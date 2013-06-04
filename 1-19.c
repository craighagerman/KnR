/*
   Exercise 1-19
   Write a function reverse(s) that reverses the characters string s, Use it to write a program that reverses its input a line at a time. 
*/

#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int max);
void reverse(char line[], int len);

main()
{
   int len = 0;
   char line[MAXLINE];

   while ((len = mygetline(line, MAXLINE)) > 1) {
      reverse(line, len);
      printf("%s\n", line);
   }
   
}


int mygetline(char line[], int max) 
{
   char c;
   int i = 0;
   for (i; i<max && ((c=getchar()) != '\n' && c != EOF); i++) {
      line[i] = c;
   }
   line[i] = '\0';
   return i;
}

void reverse(char line[], int len)
{
   char c;
   int i = 0;
   int end = len-1;
   
   for (i; i<len/2; i++) {
      c = line[end];
      line[end--] = line[i];
      line[i] = c;
   }
}