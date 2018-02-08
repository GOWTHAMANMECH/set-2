#include<stdio.h>
void main()
{
int x,y,q,r;
scanf("%d",&y);
x=0;
q=y;

while(y>0)
{
   r=y%10;
   x=x+r*r*r;
   y=y/10;
   }
if(x==q)
{
printf("Armstrong Number");
}
else
{
printf("Not Armstrong");
}
}
