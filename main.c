//program for calculating Compound interest
#include <stdio.h>

int main() {
    float principle, rate, time, compound_interest;

    // Input principle amount, rate of interest, and time
    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);


    compound_interest = principle * pow((1 + rate / 100), time) - principle;

    // Display the compound interest
    printf("Compound Interest = %f\n", compound_interest);

    return 0;
}