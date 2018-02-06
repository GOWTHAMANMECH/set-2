#include<stdio.h>
void main()
{
  int n,i,g=0;
  printf("Enter a positive integer");
  scanf("%d",&n);
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
           g=1;
           break;
      }
  }
  if(g==0)
  {
      printf("prime number");
  }
 else
 {
    printf("Not a prime number");
 }
}
