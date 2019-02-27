int main(void) {
int i,len,count=0;
char str[100];
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
	if(str[i]>='1'&&str[i]<='9')
	{
	count++;	
     }
}
if(count==len)
{
	printf("Yes");
}
else
{
	printf("No");
}

	return 0;
  }
