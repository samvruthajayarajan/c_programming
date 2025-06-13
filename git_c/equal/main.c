/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("both are equal");
    }
    else
    {
        printf("both are not equal");
    }
    return 0;
}

