#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
scanf("%d%d%d",&i,&j,&k);
if(i<j)
{
if(j<k)
{
    printf("%d",k);
}
else{printf("%d",j);}
}
else
{
    if(i<k)
    {
        printf("%d",k);
    }
    else{
        printf("%d",i);
    }
}
getch();
}
