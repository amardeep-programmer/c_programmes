// program to compute the largest of all numbers 
#include <stdio.h>

int main () {

int n,arr[20],large=-11111;
printf("enter the number of elements in the array: \n");
scanf("%d",&n);

for(int i =0;i<n;i++){
	printf("arr[%d]= ",i);
	scanf("%d",&arr[i]);

}

for(int j =0;j<n;j++){

	if (arr[j]>large){
		large=arr[j];
	}

}
printf("the largest of all numbers are : %d \n",large);

return 0;
}