#include<stdio.h>
void main()
{
    int a[100],even,odd,n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is a even number \n",a[i]);
        }
        else
        {
             printf("%d is a odd number\n",a[i]);
        }
    }
}