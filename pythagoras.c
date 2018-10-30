#include <stdio.h>
#include <stdbool.h>
bool pythagoras(int a,int b,int c)
{   int s=a+b+c;
    if(a>b&&a>c)
    {if(s==1000&&(b*b+c*c)==(a*a))
    return true;
    else
    return false;
    }
    else if(b>a&&b>c)
    {if(s==1000&&(a*a+c*c)==(b*b))
    return true;
    else
    return false;
    }
   else
   {if(s==1000&&(a*a+b*b)==(c*c))
    return true;
    else
    return false;
    }
    }
    int main()
{ 
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d %d %d",&a,&b,&c);
    bool t;
    t=pythagoras(a,b,c);
    if(t==true)
        printf("Pythagoras triple\n");
    else
        printf("Not a Pythagoras triple\n");
    return 0;  
    }
    
   
    
