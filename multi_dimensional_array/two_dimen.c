// Program to accept the elements of two dimensional array and display it.
#include <stdio.h>

int main () {


int n,num[20][20];

printf("enter the number of elements: \n");
scanf("%d",&n);

for(int i =0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("num [%d] [%d]= ",i,j);
		scanf("%d",&num[i][j]);
	}
}


for(int i =0;i<n;i++){
	for(int j =0;j<n;j++){
		printf("num are [%d] [%d]= %d\n",i,j,num[i][j]);
	}
}

	return 0;
}