/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int height;
    printf("enter the height:");
    scanf("%d",&height);
    if(height<150)
    {
        printf("the person is short");
    }
    else if(height>=150 && height<=170)
    {
        printf("the person is average height");
    }
    else
    {
        printf("the person is tall");
    }
    return 0;
}
