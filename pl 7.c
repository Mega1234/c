#include <stdio.h>

#include<string.h>

int main(void)

{

	char s[10];

	int i,t,n;

	gets(s);

	n=strlen(s);

	if(n%2==0)

	{

		for(i=0;i<n;i+=2)

		{

			t=s[i];

			s[i]=s[i+1];

			s[i+1]=t;

		}

		puts(s);

	}

	else

	{

		for(i=0;i<n-1;i+=2)

		{

			t=s[i];

			s[i]=s[i+1];

			s[i+1]=t;

		}

		puts(s);

		

	}





return 0;

}
