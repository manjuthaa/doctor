#include<stdio.h>
int main()
{
char a[80],b[90];
scanf(" %s %s" ,&a,&b);
if( a== "sunday"|| a== "saturday" )
{
printf("yes");
}
else
{
printf("no");
}
if(b== "sunday"|| b== "saturday" )
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
