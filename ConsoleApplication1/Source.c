/* Sigal Gurman */
/* 204734669 */
/* 30.11.2016 */
/* ******* */
/*  */
/* ******* */

#include <stdio.h>

void main()
{
	char char1;

	/* Get char from user */
	printf("Please enter a letter: \n");
	scanf("%c", &char1);
	/* Check if valid input */
	if (char1 % 2 != 0) {
		printf("ok %d \n",char1);


	}

}