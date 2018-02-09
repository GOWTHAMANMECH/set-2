#include<stdio.h>
void main()
{
int n,i,g=1;
printf("enter number n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
g=g*i;
}
printf("factorial=%d",g);
}
