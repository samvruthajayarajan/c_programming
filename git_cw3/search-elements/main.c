/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[6]={10,20,30,40,50,60};
    int i,key;
    printf("enter the elements to be search");
    scanf("%d",&key);
    for(i=1;i<6;i++)
    {
        if(arr[i]==key)
        {
        printf("key is found  %d",i);
        return 0;
        }
    }
        printf(" key not found");
        return 0;
}
