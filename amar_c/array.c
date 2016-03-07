#include <stdio.h>
 
int main () {

   char a[100];
	int n,i ,j;
		printf("enter 10 characters: \n");
		scanf("%d",&n);

		for(i = 0;i <n;i++) {
			printf("array[%d]= \n ",i);
			scanf("%c",&a[i]);
		


			}

		for(j = 1;j<n;j++) {
				printf("elements[%d] = %c\n",j,a[j]);
		
			}

 
   return 0;
}
