/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int temp;
    printf("enter the temperature:");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("it's freezing");
    }
    else if(temp<=10)
    {
        printf("it's very cold");
    }
    else if(temp<=20)
    {
        printf("it's cold");
    }
    else if(temp<=30)
    {
        printf("it's normal");
    }
    else if(temp<=40)
    {
        printf("it's hot");
    }
    else if(temp>=40)
    {
        printf("it's very hot");
    }
    return 0;
}