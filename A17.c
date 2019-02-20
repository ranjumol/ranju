#include<stdio.h>
#include<conio.h>
void main()
{

int l,r,flag=0;
for(l=1; ; l++)
{
    fo(rr=1; r<=10000; r++)
    {
        if (r%r==0)
            {
             flag++;
           }
    }
    if (flag==10000)
        {
            printf("The least num divisible by 1 to 10000 is = %d",l);
            break;
        }
        flag=0;
}
getch();
