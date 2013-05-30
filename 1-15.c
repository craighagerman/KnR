/*
   Exercise 1-15
   Rewrite the 'Convert Celcius to Fahrenheit' program to use a function for conversion


*/

#include <stdio.h>

int fahr2cels(int fahr);

main() 
{
   float cels, fahr;
   int lower, upper, step;
   lower = 0;
   upper = 300;
   step = 20;
   
   printf("Fahrenheit   Celsius\n");
   printf("----------------------------\n");
   for (lower; lower <= upper; lower += step) {
      fahr = lower;
      cels = fahr2cels(fahr);
      printf("%3.0f \t     %6.1f\n", fahr, cels);
   }
}

int fahr2cels(int fahr)
{
   int cels;
   cels = 5 * (fahr - 32) / 9;
   return cels;
}