/**
*
* Author: Ujwal Ghatamaneni
*
* Date: September 7, 2018
*
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[]) {
  double initialValue, finalValue, years, weeks, days, totalTime, annualReturnRate;

  printf("What is the initial value of the investment?\n");
  scanf("%lf", &initialValue);
  printf("What is the final value of the investment?\n");
  scanf("%lf", &finalValue);
  printf("How many years has it been sisnce the initial investment?\n");
  scanf("%lf", &years);
  printf("How many weeks has it been sisnce the initial investment?\n");
  scanf("%lf", &weeks);
  printf("How many days has it been sisnce the initial investment?\n");
  scanf("%lf", &days);

  totalTime = years + ( weeks / 52 ) + ( days / 365 );

  if(totalTime <= 0){
    printf("ERROR: Please enter a positve time value!\n");
    return 0;
  }

  annualReturnRate = pow((finalValue/initialValue),(1/totalTime)) - 1;

  printf("Initial value: $%.2lf\n", initialValue);
  printf("Final value:   $%.2lf\n", finalValue);
  printf("Years: %.2lf yrs\n", totalTime);
  printf("Annualized Rate Of Return: %.3lf%%\n", annualReturnRate*100);

  return 0;
}
