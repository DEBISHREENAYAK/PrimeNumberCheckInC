#include<stdio.h>
void main()
{
    int i,n,flag=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i=i+1)
    {
        if(n%i==0)
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    printf("%d is a prime no",n);
    else
    printf("%d is not a prime no",n);
}
