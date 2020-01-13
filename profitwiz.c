/*
The adder program uses two inputs 
and displays the total revenue */

// start out with preprocessor directive
#include <stdio.h>

main()

{
    // declare variables
    float fRevenue, fCost;

    fRevenue = 0;
    fCost = 0;

    /* profit = revenue - cost */

    printf("\nEnter total revenue: ");
    scanf("%f", &fRevenue);
    printf("\nEnter total cost: ");
    scanf("%f", &fCost);
    printf("\nYour profit is $%.2f\n", fRevenue - fCost);

}
