#include<stdio.h>
int main()
{
char a[100];
int space=0,i=0;
printf("Enter a line:");
gets(a);
while(a[i]!='\0')
{
char ch=a[i];
if(ch==' ' || ch== '\t')
space++;
i++;
}
printf("space=%d",space);
return 0;
}
