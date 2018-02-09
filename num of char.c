#include<stdio.h>
int main()
{
	char a[20];
	int i,c=1;
	printf("enter the character:");
	scanf("%c",&a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]==' ')
	c++;
	}
	printf("the num of words are:%d",c);
	return 0;
}
