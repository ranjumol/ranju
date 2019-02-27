#include<stdio.h>
void main()
{
  char string[50],string1[50];
  int i,count=0,k;
  printf("enter two string of equal length");
  scanf("%s\t%s",string,string1);
  printf("how many char should differ");
  scanf("%d",&k);
  for(i=0;string[i]!='\0',string1[i]!='\0';i++)
  {
    if(string[i]!=string1[i])
    {
      count++;
    }
  }
  if(count==k)
  {printf("yes");}
  else if(count>0)
  {
    printf("differ many character");
  }
else
{
  printf(" no");
}}
