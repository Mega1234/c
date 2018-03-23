#include <stdio.h>
 
int main() 
{
	char a[50],charact;
	int i,j,count=1,max=1;
	scanf("%a[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		if(a[i]==a[j])
		{
			count=count+1;
			if(count>max)
			{
				max=count;
				charact=a[i];
			}
		}
 
	}
	printf("\n%c",charact);
	return 0;
}
