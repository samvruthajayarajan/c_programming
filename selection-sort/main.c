/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[6]={55,12,65,87,23,10};
    int i,j,temp,n=6,minindex;
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<a[minindex])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            temp=a[i];
            a[i]=a[minindex];
            a[minindex]=temp;
        }
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
