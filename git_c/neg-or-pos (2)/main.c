/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1;
    printf("enter the number:");
    scanf("%d",&num1);
    if(num1<=0)
    {
        printf("number is negative");
    }
    else
    {
        printf("number is positive");
    }
    return 0;
}
