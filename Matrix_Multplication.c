#include<stdio.h>
int main()
{
int a,b,c,d,i,j,k;
int p[10][10];
int q[10][10];
int r[10][10];
printf("Enter the row of 1st matrix\n");
scanf("%d",&a);
printf("Enter the Column of 1st matrix\n");
scanf("%d",&b);
printf("Enter the row of 2nd matrix\n");
scanf("%d",&c);
printf("Enter the Column of 2nd matrix\n");
scanf("%d",&d);
if(b==c)
{
    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&q[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            r[i][j]=0;
            for(k=0;k<d;k++)
            {
                 r[i][k]=r[i][k]+p[i][k]*q[k][i];
            }
        }
    }
    printf("The output matrix is\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    }
}
else
{
    printf("Invalid Input, Multiplication cannot be performed");
}
return 0;
}

