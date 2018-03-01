#include<stdio.h>
int main()
{
int a,sum=0,b,c;
scanf("%d",&a);
while(a!=0)
{
	b=a%10;
	sum=sum+(b*b);
	a=a/10;
}
printf("%d",sum);
return 0;
}
