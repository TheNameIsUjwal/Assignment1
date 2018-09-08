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
  double angleOfIncidence, indexOfRefraction, angleOfRefraction, rads, refractionRads;

  printf("Please enter the Angle of Incidence in degrees: \n");
  scanf("%lf", &angleOfIncidence);
  if(angleOfIncidence >= 180 || angleOfIncidence <= -180){
    printf("\nError: Please enter a valid angle(between 180 and 1)!\n");
    return 0;
  }
  printf("Please enter the Index of refraction of the new medium: \n");
  scanf("%lf", &indexOfRefraction);
  if(indexOfRefraction < 1){
    printf("\nError: Please enter a valid index of refraction(greater than 1)!\n");
    return 0;
  }
  rads = angleOfIncidence * (M_PI / 180);
  angleOfRefraction = asin( sin( rads ) / indexOfRefraction );

  refractionRads = angleOfRefraction * (180 / M_PI);


  printf("Angle of incidence: %.2lf degrees\n", angleOfIncidence);
  printf("Index of refraction: %lf\n", indexOfRefraction);
  printf("Angle of refraction: %.2lf degrees\n", refractionRads);

  return 0;
}
