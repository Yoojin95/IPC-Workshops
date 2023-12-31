/***********************************************************************
// IPC Workshop 3 p2: tester program
//
// File	main_prof.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void);
int getIntMM(int min, int max);
double getDouble(void);
double getDoubleMM(double min, double max);
void line(char fill, int len);

int main(void) {
   int value;
   double dvalue;
   printf("Enter following values for testing:\nabc\n10abc\n10\n");
   line('-', 10);
   printf("Enter an integer value: ");
   value = getInt();
   printf("You entered: %d\n", value);
   line('*', 50);
   //********************************************
   printf("Enter following values for testing:\nabc\n10abc\n9\n21\n15\n");
   line('-', 10);
   printf("Enter an integer value between 10 and 20 inclusive: ");
   value = getIntMM(10, 20);
   printf("You entered: %d\n", value);
   line('*', 50);
   //********************************************
   printf("Enter following values for testing:\nabc\n10.1abc\n10.1\n");
   line('-', 10);
   printf("Enter a double value: ");
   dvalue = getDouble();
   printf("You entered: %.2lf\n", dvalue);
   line('*', 50);
   //********************************************
   printf("Enter following values for testing:\nabc\n10.1abc\n10\n21\n15.2\n");
   line('-', 10);
   printf("Enter a double value between 10.1 and 20.9 inclusive: ");
   dvalue = getDoubleMM(10.1, 20.9);
   printf("You entered: %.2lf\n", dvalue);
   line('*', 50);
   //********************************************
   return 0;
}