// program to add the contents of two dimensonal array
#include <stdio.h>

int main () {

int sum=0;


int n,num[20][20];
printf("enter the number of elements: ");
scanf("%d",&n);

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("Arr[%d][%d]= ",i,j);
		scanf("%d",&num[i][j]);
	}
}

for(int i=0;i<n;i++){
	for(int j =0;j<n;j++){
		sum = sum+num[i][j];
		printf("the sum is %d\n",sum); // for tracing 
	}
}

printf("the sum of all the elements are :%d\n",sum);


	return 0;
}