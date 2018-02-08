#include <stdio.h>
void main()
{
    int low, high, a, b;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
    b = 0;
    for(a = 3; a <= low/3; ++a)
    {
    if(low % a == 0)
    {
    b= 2;
    break;
    }
    }
    if (b == 0)
    printf("%d ", low);
    ++low;
    }
}
