#include <stdio.h>
int ab10(int a,int b)
{   if(a==10|| b==10|| a+b==10)
    return 1;
    else
    return 0;
    }
    int main()
    {   int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
     printf("The output is: %d\n ",ab10(a,b));
     }
    

