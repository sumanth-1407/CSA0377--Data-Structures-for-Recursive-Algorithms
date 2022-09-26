#include<stdio.h>
void main()
{
    int t1=0,t2=1,t3,n,i;
    printf("Enter n");
    scanf("%d",&n);
    printf("The fibonacci series is \n");
    if(n==0||n==1)
    {
        printf("%d\t%d\t",t1,t2);
    }
    else
    {
         printf("%d %d ",t1,t2);
        for(i=2;i<n;i++)
        {
            t3=t1+t2;
            printf("%d\t",t3);
            t1=t2;
            t2=t3;
        }
    }
    

}