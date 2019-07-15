#include<stdio.h>
int main()
{
    int a[100],i,d=0,h;
    for(i=0;i<10;++i)
    {
        
        scanf("%d",&a[i]);}
 for(i=0;i<10;++i)
    {
        
        if(a[i]>d)
        {
            d=a[i];
        }
        
    }

    printf("%d",d);
}    
