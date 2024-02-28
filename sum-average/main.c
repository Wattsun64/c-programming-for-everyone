#include <stdio.h>

int main() {
  float one, two, three, four, five;
  scanf("%f", &one); 
  scanf("%f", &two); 
  scanf("%f", &three); 
  scanf("%f", &four); 
  scanf("%f", &five); 

  float total = one + two + three + four + five;
  float average = total / 5;

  printf("The total is: %.1f\n", total);
  printf("The average is: %.1f\n", average);


  return 0;
}
