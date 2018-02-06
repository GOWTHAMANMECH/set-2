#include<stdio.h>
main()
{
    int x,y,r,d=0;
    printf("Enter an integer:");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
        r=x%10;
        d=d*10+r;
        x=x/10;
    }
    if(y==d)
    {
        printf("%d is a palindrome",y);
    }
    else
    {
        printf("%d is not a palindrome",y);
    }
}
