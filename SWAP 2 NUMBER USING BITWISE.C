#include<stdio.h>
int main()
{
    int a=5,b=7;
    printf("before swaping %d %d",a,b);
    
    a=a^b;
    b=a^b;
    a=a^b;
    
    printf("after swaping two numbers %d %d",a,b);
    return 0;
    
    }
