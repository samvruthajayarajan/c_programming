/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    if((year%1!=0 && year%4==0))
    {
        printf("%d is leap a year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    return 0;
}
