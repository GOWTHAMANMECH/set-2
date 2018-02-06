#include <stdio.h>
int main()
{
	long int x,y,i;
	printf("\nEnter  intial number :");
	 scanf("%ld",&x);
	printf("\nEnter final number :");
	scanf("%ld",&y);
	for(i=x;i<=y;i++)
	{
		if(i%2==1)
		printf("%d\t",i);
	}
  }
