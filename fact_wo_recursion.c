#include<stdio.h>
void main()
{
    int fact=1;
    int i,n;
    printf("Enter the number n\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
    }
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("The factorial of the  number %d is %d",n,fact);
}