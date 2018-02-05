#include<stdio.h>
int main()
{
int d,n1,n2,n3;
char m[100],n[100],o[100];
scanf("%s %s %s",&m,&n,&o);
n1=strlen(m);
n2=strlen(n);
n3=strlen(o);
d=n1+n2+n3;
printf("%d",d);
return 0;
}
