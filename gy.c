#include<stdio.h>
int main()
{
    int a[100],b,i,j,c,k;
    scanf("%d",&b);
    for(i=0;i<b;++i)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<b;++i)
    {
        for(j=0;j<b-1;++j)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }   
    for(k=0;k<b;++k)
    {
        printf("%d ",a[k]);
    }
}
