/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the x:");
    scanf("%d",&x);
    printf("enter the y:");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
        printf("%d,%d lies in first quardrant",x,y);
    }
    else if(x<0&&y>0)
    {
        printf("%d,%d lies in second quardrant",x,y);
    }
    else if(x<0 && y<0)
    {
        printf("%d,%d lies in third quardrant",x,y);
    }
    else if(x>0&&y<0)
    {
        printf("%d,%d lies in fourth quardrant",x,y);
    }
    else if(x==0&&y==0)
    {
        printf("point is at origin\n");
    }
    else if(x==0)
    {
        printf("point is at y-axis\n");
    }
    else if(y==0)
    {
        printf("point is at x-axis\n");
    }
    return 0;
}