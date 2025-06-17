/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void arrreverse(int a[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

int main()
{
    int a[5],i,n;
    printf("enter the no.of elements");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    arrreverse(a,5);
   
    return 0;
}
