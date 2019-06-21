#include<stdio.h>
int main()
{
    int a,b,i,j,k=0;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<i;++j)
        {
            if((i%j)==0)
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
            printf("%d ",i);

        }
    
}
return 0;
}
