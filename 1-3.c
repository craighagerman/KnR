/*
   Exercise 1-3
   Convert Celcius to Fahrenheit


*/

#include <stdio.h>


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
      cels = 5 * (fahr - 32) / 9;
      printf("%3.0f \t     %6.1f\n", fahr, cels);
   }

}
