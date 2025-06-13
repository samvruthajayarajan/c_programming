/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1,num2,num3,avg;
    printf("enter three numbers:");
    scanf("%f%f%f",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("average is %f",avg);

    return 0;
}
