/**
 * C program to check Even or Odd number using switch case
 */

#include <stdio.h>

int main()
{
    int num,rem;

    /*
     * Reads a number from user
     */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    rem=num%2;
    switch(rem)
    {
        
        case 0: printf("Number is Even\n");
                break;
       
        case 1: printf("Number is Odd\n");
                break;
    }

    return 0;
}


