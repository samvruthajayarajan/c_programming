/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int roll_no;
    char name[50];
    int physics,chemistry,computer_application;
    int total;
    float percentage;
    printf("enter the rollno of the student:");
    scanf("%d",&roll_no);
    printf("enter the name of the student:");
    scanf("%s",name);
    printf("enter the marks:");
    scanf("%d%d%d",&physics,&chemistry,&computer_application);
    total=physics+chemistry+computer_application;
    percentage=(total/3);
    printf("roll no:%d\n",roll_no);
    printf("name:%s\n",name);
    printf("physics:%d\n",physics);
    printf("chemistry:%d\n",chemistry);
    printf("computer application:%d\n",computer_application);
    printf("total marks=%d\n",total);
    printf("percentage=%.2f\n",percentage);
    if(percentage>=60)
    {
        printf("division=first\n");
    }
    else if(percentage>=50)
    {
        printf("division=second\n");
    }
    else if(percentage>=40)
    {
        printf("division=third\n");
    }
    else
    {
        printf("division=fail\n");
    }
    return 0;
}