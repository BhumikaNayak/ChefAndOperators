#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int a,b;
    while(T)
    {
     scanf("%d %d",&a,&b);
     if(a>b)
    {
        printf(" >\n ");
    }    
     else if(a<b)
    {
         printf(" <\n ");
    }
     else
    { 
     printf(" =\n");
    }
    T--;
    }
    return 0;
}