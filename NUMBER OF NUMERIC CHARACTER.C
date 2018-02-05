#include<stdio.h>
#include<string.h>
int main()
{
char a[40];
int k,count=0;
gets(a);
while(a[i]!='\0')
{
if(a[i]>='0'&&a[i]<='9')
count++;
i++;
}
printf("%d",count);
return 0;
}
