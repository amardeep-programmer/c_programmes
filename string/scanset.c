/* PROGRAM TO DEMO THE USE OF SCANSET FUNCTION */
#include <stdio.h>

int main () {

char str[20];
printf("\n enter string :");

scanf("%[A-Z]",str); // ACCEPTS ONLY UPPER CASE CHARACTERS 

printf("the string is %s",str);


	return 0;
}