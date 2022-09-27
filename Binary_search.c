#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n],flag=0,i,first=0,last,mid,key;
    last=n-1;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Element to search\n");
    scanf("%d",&key);
    while (first<last)
    {
        mid=(first+last)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]>key)
        last=mid-1;
        else
        first=mid+1;
    }
    if(flag==1)
    {
        printf("Element %d is found at %d",key,mid);
    }
    else
    printf("The element is not found");
}
