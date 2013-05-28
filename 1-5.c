/*
   Exercise 1-4
   Modify the temperature conversion program to print the table in reverse order,
   that is, from 300 degres to 0   
*/


#include <stdio.h>

main() 
{
   float cels, fahr;
   int step, lower, upper;
   step = 20;
   lower = 0;
   upper = 300;

   printf("Fahrenheit    Celsius\n");
   printf("----------------------------\n");
   for(upper; upper >=lower; upper -= step) {
      fahr = upper;
      cels = 5 * (fahr - 32) / 9;
      printf("%3.0f \t     %6.1f\n", fahr, cels);
   }
}