#include<stdio.h>

int main(){
    float units , bill , rate_per_unit , fixed_charges;
    rate_per_unit=5;
    fixed_charges=5.00;

    printf("enter the number of units consumed:");
    scanf("%f", &units);
    bill=(units * rate_per_unit)+ fixed_charges;

    printf("\nElectricity Bill\n");
    printf("-------------\n");
    printf("units consumed:%.2f\n",units);
    printf("rate per unit: Rs=%.2f\n",rate_per_unit);
    printf("fixed charges: Rs=%.2f\n",fixed_charges);
    printf("Total Bill: Rs=%.2f\n",bill);
    return 0;
}