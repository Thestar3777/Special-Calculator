#include <stdio.h>
#include <ctype.h>

int main(){


  char unit;
  float temp;

  printf("Is the temp in F or C? ");
  scanf("%c", &unit);

  if (unit == 'C') {
    printf("You chose Celcius");
  }
  else if(unit == 'F'){
    printf("You have chosen Farenheit");
  }
  else {
    printf("\n %c not valid!", unit);
  }

  return 0;
}