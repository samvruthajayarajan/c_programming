/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("equilateral triangle");
    }
    else if(a==b||b==c||a==c)
    {
        printf("isosceles triangle");
    }
    else
    {
        printf("scalene triangle");
    }
    return 0;
}