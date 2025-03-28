#include <stdio.h>

int main() {

  const double PI = 3.141559;
  double radius;
  double circunference;
  double area;

  printf("\nPlease enter radius of a circle ");
  scanf("%lf", &radius);

  circunference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("\nCircumference: %.2lf", circunference);
  printf("\nArea: %.2lf", area);


  return 0;
}