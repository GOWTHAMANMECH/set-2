#include<stdio.h>
int main()
{
int a,g=1,i;
scanf("%d",&a);
if(a>0)
{
for(i=1;i<=5;i++)
{
g=a*i;
printf("%d ",g);
}
}
return 0;
}
