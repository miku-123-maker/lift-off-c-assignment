#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  int circle_radius , circle_diameter;
  float PI_value=3.14, circle_area , circle_circumf;
  
  printf("enter the radius = ");
  scanf("%d", &circle_radius);
  
  circle_diameter = 2 * circle_radius;
  printf("diameter of circle is:%d", circle_diameter);
  
  circle_area = PI_value * circle_radius * circle_radius;
  printf("area of circle is :%f", circle_area);
  
  circle_circumf = 2 * PI_value * circle_radius;
  printf("circumferance of circle is :%f", circle_circumf);
  
  
	return 0;
}
