// program to read three dimensional array
#include <stdio.h>


int main () {

int num[30][30][30],n;

printf("enter the number of elements: \n");
scanf("%d",&n);


for(int i =0;i<n;i++){    // scanning values from user 
	for(int j =0;j<n;j++){
		for(int k=0;k<n;k++){
			printf("num[%d][%d][%d]= \n",i,j,k);
			scanf("%d",&num[i][j][k]);
		}
	}
}

for(int i =0;i<n;i++){
	for(int j =0;j<n;j++){
		for(int k=0;k<n;k++){
			printf("the elements are [%d] [%d] [%d] = %d\n",i,j,k,num[i][j][k]);
		}
	}
}

return 0;
}