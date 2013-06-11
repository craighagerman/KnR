/*
   Exercise 1-21
   Write a program entab that replaces strings of blanks with the minimum number of tabs and blanks to achieve the same spacing. Use the same stops as for detab . When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
*/

#include <stdio.h>

#define MAXLEN 1000
#define TABLEN 4     // set tab = 4 spaces
#define TAB '\t'
#define SPACE ' '

int mygetline(char line[], int max);
void entab(char buffer[], char line[]);

main() 
{
   int len = 0;
   char buffer[MAXLEN];
   char line[MAXLEN];
   
   while ( (len = mygetline(buffer, MAXLEN)) > 1) {
      entab(buffer, line);
      printf("%s\n", line);
   }
}

int mygetline(char line[], int max) 
{
   char c;
   int i = 0;
   for (i; ((c = getchar()) != EOF) && c != '\n'; i++) {
      line[i] = c;
   }
   line[++i] = '\0';
   return i;
}

void entab(char buffer[], char line[])
{
   char c;
   int count, i, j, k;
   count = i = j = k = 0;
   char tabbuf[5];
   
   for (i; buffer[i] != '\0'; i++) {
      if (count == TABLEN) {
         line[k++] = TAB;
         count = 0;  
      }
         
      if (buffer[i] == SPACE) {
         tabbuf[count++] = buffer[i];
      }
      else {
         for (j = 0; j<count; j++) {
            line[k++] = tabbuf[j];
         }
         count = 0;
         line[k++] = buffer[i];
      }
   }
   line[k] = '\0';
}
