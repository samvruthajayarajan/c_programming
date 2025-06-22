/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the cordinates:");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
    {
        printf("%d,%d lies on first quadrant",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("%d,%d lies on second quadrant",x,y);
    }
    else if(x<0 && y<0)
    {
        printf("%d,%d lies on third quadrant",x,y);
    }
    else if(x>0 && y<0)
    {
        printf("%d,%d lies on fourth quadrant",x,y);
    }
    else if(x==0 && y==0)
    {
        printf("the point is at origin");
    }
    else if(x==0)
    {
        printf("the point is at y axis");
    }
    else if(y==0)
    {
        printf("the point is at x axis");
    }
    return 0;
}
