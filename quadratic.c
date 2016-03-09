#include <stdio.h>
#include <math.h>

int main () {

float a,b,c,d,root1,root2;
printf("Enter three numbers: \n");
scanf("%f %f %f",&a,&b,&c);

if((a==0) &&(b==0)){
printf("invalid cofficients\n");
}

else {

d= b*b-4*a*c;
printf("tha value of d is: %.4f\n",d);

}

if (d==0) {

root1=root2=-b/(2*a);
printf("the value of root1 is: %.4f\n the value of root2 is: %.4f\n",root1,root2);

}

else if (d>0) {

root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("the value of root1 is : %.4f\n the value of root2 is: %.4f\n",root1,root2);
}

else {

root1=-b/(2*a);
root2 = sqrt(fabs(d))/(2*a);
printf("the value of root1 is : %.4f +i %.4f\n",root1,root2);
printf("the value of root2 is : %.4f -i %.4f\n",root1,root2);

}



return 0;
}
