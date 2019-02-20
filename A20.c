#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],c[10];
    int j,i,b[10];
    printf("Enter the string:");
    scanf("%s",&a);
    j=strlen(a);
    for(i=0;i<j;i++)
    {
        b[i]=a[i];
        b[i]+=3;
        c[i]=b[i];
    }
    c[j]='\0';
    printf(" The encoded string is: %s ",c);
}
