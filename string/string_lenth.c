/* program to find the length of string */

#include <stdio.h>

int main () {

int i=0;
int length;

char a[20];

printf("enter a string \n");

gets(a);


while (a[i] != '\0'){



	i++;
	length=i;
}

printf("the length of the string is %d\n",length );


	return 0;
}