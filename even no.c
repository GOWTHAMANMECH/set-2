#include<stdio.h>
#include<conio.h>
void main()
{
   int g,m,n;
   clrscr();
   printf("Enter the limits:");
   scanf("%d%d",&m,&n);
   for(g=m;g<=n;g++)
   { 
     if(g%2==0)
       printf("%d",g);
   }
getch();
}
