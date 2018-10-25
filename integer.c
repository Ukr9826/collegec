#include <stdio.h>
#include <stdlib.h>
int aps(int n)
{   if(abs(n-100)<=10||abs(n-200)<=10)
    {return 1;}
    else 
    {return 0;
    }}
int main()
{   int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The output is: %d\n ",aps(n));
    return 0;
    }
    
    



