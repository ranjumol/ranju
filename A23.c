#include <stdio.h>
int main()
{
    int a1,a2,arr[20],i,j,max,l;
    printf("Enter no of elements in the array");
    scanf("%d",&a1);
    printf("Enter the no of elements do you want to insert ");
    scanf("%d",&a2);
    l=a1+a2;
    printf("Enter the array elements");
    for(i=0;i<a1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the numbers you want to insert");
    for(i=a1;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<(a1+a2);i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf( " MAXIMUM of the given elements is= ");
    for(i=0;i<(a1+a2);i++)
    {
        if(arr[i]==max)
        {
            printf(" %d\t",arr[i]);
        }
    }   
    return 0;
}
