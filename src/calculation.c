/*
 * calculation.c
 *
 *  Created on: 20.01.2015
 *      Author: busley
 */

#include "..\calculation.h"


//Function Definitions

void calculator_operations()
{
    //system("cls");  use system function to clear
    //screen instead of clrscr();
	printf("\n             Welcome to C calculator \n\n");

	printf("******* Press 'Q' or 'q' to quit ");
	printf("the program ********\n");
	printf("***** Press 'H' or 'h' to display ");
	printf("below options *****\n\n");
	printf("Enter 'C' or 'c' to clear the screen and");
	printf(" display available option \n\n");

	printf("Enter + symbol for Addition \n");
	printf("Enter - symbol for Subtraction \n");
	printf("Enter * symbol for Multiplication \n");
	printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
}

int addition(int a, int b)
{
	int total=0;

	total = a + b;
	printf("\n%d + %d = %d\n", a, b, total);
	fflush(stdout);
	return total;
}

int subtraction(int a, int b)
{
	int total=0;

    total = a - b;
    printf("\n%d - %d = %d\n", a, b, total);
    fflush(stdout);
    return total;
}

int multiplication(int a, int b)
{
	int total=0;

    total=a*b;
    printf("\n%d * %d = %d\n", a, b, total);
    fflush(stdout);
    return total;
}

int division(int a, int b)
{
	int total=0;

    if (b != 0)
    {
    	total=a/b;
    }
    printf("\n%d / %d = %d\n", a, b, total);
	fflush(stdout);
	return total;
}


int modulus(int a, int b)
{
    int total=0;

    total=a%b;
    printf("\n%d ? %d = %d\n", a, b, total);
    fflush(stdout);
    return total;
}

