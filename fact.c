#include<stdio.h>
int main()
{
int x,i,m;
scanf("%d",&x);
if(x==0)
{
    printf("1");
}
else
{
for(i=1;i<=x;i++)
{
    m=i*m;
    ++i;
    
};
printf("%d",m);
}
}
