#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f[50],i,j,k,l,sum=0;
    scanf("%d",&i);
    scanf("%d",&k);
    for(j=0;j<i;++j)
    {
        scanf("%d",&f[j]);
    }

    for(l=0;l<=k-1;++l)
    {
        sum=sum+f[l];
    }


printf("%d",sum);
}

