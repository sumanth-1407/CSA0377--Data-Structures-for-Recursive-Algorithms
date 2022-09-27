#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n],flag=0,i,key;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the key element to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Element %d is Found at %d",key,mid);
    else
    printf("The element is not found");
}
