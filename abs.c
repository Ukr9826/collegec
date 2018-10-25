#include <stdio.h>
int sum(int n)
{ int i;  
int s=0;   
for( i=0;i<=n;i++)
    { if(i%2==0)
    {s+=i;
    }}
    return s;
    }
int main()
{ int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The sum of all even numbers is %d\n ",sum(n));
    return 0;
    }
