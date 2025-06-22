/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int month;
    printf("enter month number:");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("31 days\n");
    }
    else if(month==4||month==6||month==9||month==11)
    {
        printf("30 days\n");
    }
    else if(month==2)
    {
        printf("28 or 29 days\n");
    }
    else
    {
        printf("invalid month number\n");
    }
    return 0;
}