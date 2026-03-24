/* Name: Dembe Mark**/
/* Stundent Number: 25/U/BIE/01366/PE*/
#include <stdio.h>
int main() {
 float distance, fuelUsed, efficiency;

 printf("Enetr the distance travelled (km): \n");
 scanf("%f", &distance);

 printf("Enter the fuel used (litres): \n");
 scanf("%f", &fuelUsed);

 efficiency = distance / fuelUsed;
  printf("Fuel efficency: %.2f km/litre\n", efficiency);
  
  return 0;



}
