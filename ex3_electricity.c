/* Name: Dembe Mark*/
/* Student Number: 25/U/BIE/01366/PE*/
#include <stdio.h>
int main() {
    float unitsConsumed, costPerUnit, totalBill;

    printf("Enter the number of units consumed: \n");
    scanf("%f", &unitsConsumed);

    printf("Enter the cost per unit: \n");
    scanf("%f", &costPerUnit);

    totalBill = unitsConsumed * costPerUnit;
    printf("Total bill: %.2f\n", totalBill);

    return 0;
}
