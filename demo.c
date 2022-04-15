#include<stdio.h>
void main()
{
    int x;
    int i,num;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x % i == 0)
        {
            num++;
        }
    }
    if(num == 2)
    {
        printf("%d is a prime number",x);
    }
    else
    {
        if(num %2 == 0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
}