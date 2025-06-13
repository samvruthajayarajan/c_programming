
#include <stdio.h>

int main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("she is eligible to cast her vote");
    }
    else
    {
        printf("she is not eligible to cast her vote");
    }
    return 0;
}