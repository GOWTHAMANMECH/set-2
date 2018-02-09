#include <stdio.h>
void main()
{
  int a, b, i, d, g, c;
  printf("Enter two numbers");
  scanf("%d %d", &a, &b);
  printf("Armstrong numbers between %d and %d are: ", a, b);
  for(i=a+1; i<b; ++i)
    {
      d=i;
      g=0;
      while(d!=0)
         {
          c=(d%10);
          g+=c*c*c;
          d/=10;
          }
       if(i==g)
         {
          printf("%d ",i);
         }
    }
}
