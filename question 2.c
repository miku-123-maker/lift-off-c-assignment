#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   float celsius;
   float fahrenheit;
   printf("enter temperature in celsius: ");
  scanf("%f", &celsius);

   fahrenheit = (celsius * 9/5) + 32;
   
   printf("celcius = %f amd fahrenheit = %f", celsius , fahrenheit);

	return 0;
}
