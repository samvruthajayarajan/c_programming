/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int maths,physics,chemistry,total,mp_total;
    printf("enter the marks in maths:");
    scanf("%d",&maths);
    printf("enter the marks in physics:");
    scanf("%d",&physics);
    printf("enter the marks in chemistry:");
    scanf("%d",&chemistry);
    total=maths+physics+chemistry;
    mp_total=maths+physics;
    if(maths>=65 && physics>=55 && chemistry>=50 &&(total>=190 || mp_total>=140))
    {
        printf("candidate is eligible");
    }
    else
    {
        printf("candidate is not eligible");
    }
    return 0;
}
