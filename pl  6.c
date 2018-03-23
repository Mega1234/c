#include <stdio.h>
#include<string.h>
int main() 
{
	char s1[50],s2[50];
	int i,j,flag=1,a,b;
	scanf("%s %s",s1,s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l2;j++)
		{
			a=s1[i]-s1[j];
			b=s2[i]-s2[j];
			if(a==b)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\n no");
	}
	if(flag==1)
	{
		printf("\n  no");
	}
	else
	{
		printf("\n yes");
	}

	return 0;
}
