#include <stdio.h>
#include <stdbool.h>
bool palindrome(int n)
{   int rev=0;int c=1;
    int m=n;
    while(m>0)
    { int d=m%10;
    rev= (rev*10)+d;
    m/=10;
    }
   if(n==rev)
   return true;
   else 
   return false;
   }
   int main()
   { int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    bool t;
    t=palindrome(n);
    if(t==true)
    printf("Palindrome number\n");
    else
    printf("Not a palindrome number\n");
    return 0;
    }
   
   

