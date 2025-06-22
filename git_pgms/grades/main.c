/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  char grade;
  printf("enter the grade:");
  scanf("%c",&grade);
  switch(grade)
  {
      case 'E':
        printf("excellent");
        break;
      case 'V':
        printf("very good");
        break;
      case 'G':
        printf("good");
        break;
      case 'A':
        printf("average");
        break;
      case 'F':
        printf("fail");
        break;
  }
    return 0;
}
