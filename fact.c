#include <stdio.h>

int main () {

int num;
double fact=1.0;

printf("enter a number:\n");
scanf("%d",&num);

if(num==0) {

fact=1.0;
}

else {

for(int i=1;i<=num;i++){

fact =fact*i;
}

printf("the factorial of a given number %d is %f: \n",num,fact);
}
return 0;
}
