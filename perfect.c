#include <stdio.h>
#include <stdbool.h>
bool perfect(int n)
{   int s=0; int i;
    for(i=1;i<n;i++)
    {   if(n%i==0)
        {
            s=s+i;
        }
    }
    if(n==s)
        return true;
     else 
        return false;
}
     
int main()
{ 
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    bool t;
    t=perfect(n);
    if(t==true)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
    return 0;  
    }
    
