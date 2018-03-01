#include<stdio.h>
int main()
{
int c,d;
scanf("%d%d",&c,&d);
printf("\n %d\t%d",c,d);
c^=d;
d^=c;
c^=d;
printf("\n%d\t%d",c,d);
return 0;
}
