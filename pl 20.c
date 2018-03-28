#include <stdio.h>

int main(void) 
{
	char a[50];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+3;
		if(a[i]=='X')
		a[i]='A';
		if(a[i]=='Y')
		a[i]='B';
		if(a[i]=='Z')
		a[i]='C';
	}
	printf("%s",a);
	return 0;
}
