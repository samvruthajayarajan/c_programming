/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2;
    printf("enter the numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
        printf("both are equal numbers");
    }
    else
    {
        printf("both are not equal");
    }
    return 0;
}