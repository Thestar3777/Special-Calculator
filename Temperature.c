#include <stdio.h>
#include <ctype.h>

int main()
{

  char unit;
  float temp;

  printf("\n---------------------------------------\n");
  printf("\nWelcome to the temperature converter!\n");
  printf("\nIs the temp in F or C? ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C')
  {
    printf("\nEnter the temp in celcius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThat temp in Farenheit is %.1f\n", temp);
    printf("\n---------------------------------------");
  }
  else if (unit == 'F')
  {
    printf("\nEnter the temp in Farenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nThe temp in Celcius is: %.1f\n", temp);
    printf("\n---------------------------------------");
  }
  else
  {
    printf("\n %c not valid!", unit);
  }

  return 0;
}
