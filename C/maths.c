#include <stdio.h>
#include "Includes/mathsV.h"

int main(void){

    int num1,num2;
    printf ("Enter 2 numbers to be added : ");
    scanf("%d", &num1);
    scanf("%d",&num2);
    printf("\nThe numbers you want added is %d and %d\n", num1,num2);
    
    int val = add(num1 , num2);

    printf("\n%d + %d = %d\n", num1 , num2 , val);

}