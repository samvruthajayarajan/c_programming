/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,prime,limit;
    {
    printf("enter the limit");
    scanf("%d",&limit);
    }
    for(i=2;i<=limit;i++)
    {
        prime=1;
     for(j=2;j<i;j++)
      {
          if(i%2==0)
          prime=0;
     
      }
      if(prime)
     printf("%d\t",i);
    }
      return 0;
    
}


     
