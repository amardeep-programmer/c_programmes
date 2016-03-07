#include <stdio.h>

int main () {

int n;
int arr[100];

printf("enter the number of elements\n");
scanf("%d",&n);


	for(int i =0;i<n;i++) {

		printf("array[%d]= ",i);
		scanf("%d",&arr[i]);

	}

	printf("Array elements are ");

	for (int j = 0;j<n;j++) {
		printf("Arr[%d] = %d\n",j,arr[j]);
		

	}
return 0;
}
