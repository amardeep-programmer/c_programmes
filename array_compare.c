#include <stdio.h>

int main () {

int n,flag,arr[20],arr2[20];

printf("enter the number of elements\n");
scanf("%d",&n);

for(int i =0;i<n;i++){
	printf("arr[%d]= ",i);
	scanf("%d",&arr[i]);
}

for(int i =0;i<n;i++){
	printf("arr2[%d]= ",i);
	scanf("%d",&arr2[i]);
}

for(int i=0;i<n;i++){
	if(arr[i]==arr2[i]){
		flag=1;
	}
	else {
		flag=0;
		break;
	}
}

if (flag ==1){
	printf("array is equal\n");
}

else {
	printf("array is not equal\n");
}

return 0;
}