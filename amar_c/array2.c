// program to find the mean of n numbers using array
#include <stdio.h>



int main () {

int arr[20];
int sum = 0 ;
int n;
float mean;

printf("enter the number of elements to be printed :");
scanf("%d",&n);

for(int i =0;i<n;i++){

	printf("Arr[%d]= ",i);
	scanf("%d",&arr[i]);
}

for(int j =0;j<n;j++){
	sum = sum+arr[j];	
}

mean = sum/n;


printf("the sum of given numbers are : %d\n",sum);
printf("the mean of given numbers are : %.4f\n",mean);

return 0;
}