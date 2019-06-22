#include<stdio.h>
int main()
{
    int i,j,k,q,w,z=0;
    char a[50],b[50];
    scanf("%s%s",a,b);
    q=strlen(a);
    w=strlen(b);
    for(i=0,j=0;i<q,j<w;i++,j++)
    {
       if(a[i]!=b[j])
       {
           z++;
       }
    }
    if(z==1)
    {
        printf("yes");
    }
    else{
        printf("no");
    }

}
