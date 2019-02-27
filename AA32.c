#include<stdio.h>
void main()
{
    int a[10],i,j,n,t,flag=0,k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\nEnter the value of k:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
             {
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
             }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        if(a[i]==k)
        {
            printf("\nYes");
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\n No");
    }
}
