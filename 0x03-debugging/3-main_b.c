0x03-debugging

README


#C - Debugging

#TASKS.

Multiple mains mandatory In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:
Like, comment, subscribe mandatory Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code. You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

0 > 972? mandatory This program prints the largest of three integers.
Leap year mandatory This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.


==================================================


MAIN.H CODE


#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>


void positive_or_negative(int i);

int largest_number(int a, int b, int c);

void print_remaining_days(int month, int day, int year);

int convert_day(int month, int day);


#endif



==========================================






MAIN.C CODE



#include "main.h"


/**

 * main - tests function that prints if integer is positive or negative

 * Return: 0

 */


int main(void)

{

 int i;


 i = 98;

 positive_or_negative(i);


 return (0);

}




=============================================


0-main.c CODE



#include "main.h"


/**

 * main - Test function for positive or negative

 * Return: 0

 */


int main(void)

{

 int i;


 i = 0;

 positive_or_negative(i);


return (0);

}



================================================


1-main.c CODE


#include <stdio.h>


/**

 * main - causes an infinite loop

 * Return: 0

 */


int main(void)

{

 int i;


 printf("Infinite loop incoming :(\n");


 i = 0;


 /*while (i < 10)*/

 /*{*/

 /* putchar(i);*/
