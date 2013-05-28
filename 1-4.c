/*
   Exercise 1-3
   Convert Fahrenheit to Celsius
   formula = °C  x  9/5 + 32 = °F
*/

#include <stdio.h>

main() 
{
   float cels, fahr;
   int step, lower, upper;
   step = 10;
   lower = -30;
   upper = 120;

   printf("Celsius    Fahrenheit\n");
   printf("---------------------------\n");
   for(lower; lower <= upper; lower +=step) {
      cels = lower;
      fahr = (cels * 9.0 / 5.0) + 32;
      printf("%3.0f \t%6.1f\n", cels, fahr);
   }
}