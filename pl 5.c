#include<stdio.h>
#include<string.h>
int main()
{
	
    char str[100];
        int r=0 , i;

    gets(str);
   
    for(i=0 ; i < str[i] != '\0' ; i++)
{
	if(str[i] == 'i'){
	
	
	r= r+1;
}

	else if( str[i] == 'v') 
{
	r=r+5;
}
	else if( str[i] == 'x')
{
		r= r + 10;	
	}
}
 
  for(i=0 ; i < str[i] != '\0' ; i++)
{
	if(str[i] == 'i' && (str[i+1] == 'v' ||   str[i+1]== 'x'))
	r= r-2;
	}
	   
	printf("%d\n",r);
}
