/* program to demostrate the use of gets and puts */
#include <stdio.h>
int main () {

char a[20];

printf("enter a string\n");

gets(a);

puts(a);

printf("the size of the string is %d",sizeof(a));

	return 0;
}