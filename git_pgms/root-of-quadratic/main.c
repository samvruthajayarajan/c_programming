/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter the coefficients:");
    scanf("%f%f%f",&a,&b,&c);
    printf("equation: %fx^2+%fx+%f",a,b,c);
    d=(b*b)-4*a*c;
    if(d>0)
    {
        printf("roots are real numbers\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("roots are:\n");
        printf("\t%f\n",r1);
        printf("\t%f\n",r2);
    }
    else if(d==0)
    {
        printf("both roots are equal\n");
        r1=(-b)/(2*a);
        printf("root:%f\n",r1);
    }
    else
    {
        printf("roots are imaginary. cannot find real root\n");
    }
    return 0;
}