#include <stdio.h>
#include<conio.h>
void  main() 
    {    
    int a[100], m, size, c, location = 1;
    
    printf("Enter the size of the element");
    scanf("%d",&size);
    
    printf("Enter %d integers\n", size);
    
    for ( c = 0 ; c < size ; c++ )
    scanf("%d", &a[c]);    
    
    min= a[0];
    
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( a[c] < m) 
        {
m = a[c];
location = c+1;
        }
    } 
    
    printf("Minimum element in the given list is%d",min);
    getch();
}
