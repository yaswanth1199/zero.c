#include<stdio.h>
int main()
{
    int a,b,i,j,k=0,y=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;++i)
    {
        for(j=2;j<i;++j)
        {
            if(i%j==0)
            {
                ++k;
                break;
               
            }
            else
            {
                k=0;
            }
        }
        if(k==0)
        {
            ++y;
        }
        
    }
    printf("%d",y);
}
