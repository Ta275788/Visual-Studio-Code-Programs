#include<stdio.h>
void main()
{
    int x;
    int i,num=0;
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
    {
        if(x % i == 0)
        {
            num=1;
            break;
        }
    }
    if(num == 0)
    {
        printf("%d is a prime number",x);
    }
    else
    {
        if(x %2 == 0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
}