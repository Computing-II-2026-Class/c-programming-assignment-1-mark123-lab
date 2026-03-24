
/* Name: Dembe Mark*/
/* Student Number: 25/U/BIE/01366/PE*/
#include <stdio.h>
int main() {
float amount, feePercent, feeAmount, total;

printf("Enter amount to be sent: \n");
scanf("%f", &amount);
 
printf("Enter the transaction fee: \n");
scanf("%f", &feePercent);

feeAmount = (feePercent / 100) * amount;
total = amount + feeAmount;

printf("Transaction Fee: %.2f\n", feeAmount);
printf("Total deducted: %.2f\n", total);
return 0;
}
