// start out with preprocessor directive
#include <stdio.h>

// add the main function
main()
{
    //declare variables
    int iOperand1 = 0;
    int iOperand2 = 0;

    /* add program statements
    printf displays output to console
    scanf asks for a users input
    %d is to format as a integer
    \n is the escape sequence that tells
    the program to go to the next line
    \n is the escape sequence for tab */

    printf("\n\tAdder Program, by Michael Vine\n");
    printf("\nEnter first operand: ");
    scanf("%d", &iOperand1);
    printf("Enter second operand: ");
    scanf("%d", &iOperand2);
    printf("The result is %d\n", iOperand1 + iOperand2);

}