#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,j,;
    printf("\nEnter a number:");
    scanf(" %d",&num);
    while(i<=num)
    {
        if(num%i==0)	
        {
            j=1;
            while(j<=i)
            {
                if(i%j==0)
              
                }
                j++;
         }          
                printf("\n %d is a prime factor",i);
        }
        i++;
    }
    getch();
}
