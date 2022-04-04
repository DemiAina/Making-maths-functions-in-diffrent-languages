#include <stdio.h>

#include "Includes/mathsV.h"

int main(void){

    int num1,num2,val;

    printf ("Enter 2 numbers to be added : ");
    
    scanf("%d%d", &num1,&num2);
    
    printf("\nThe numbers you want added is %d and %d\n", num1,num2);
    
    val = add(num1 , num2);

    printf("\n%d + %d = %d\n", num1 , num2 , val);

    val = sub(num1 , num2);

    printf("\n%d - %d = %d\n", num1 , num2 , val);
}