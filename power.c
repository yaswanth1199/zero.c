#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,i,y=1;
    scanf("%d%d",&s,&i);
    while(i!=0)
    {
        y=y*s;
        --i;
    }
    printf("%d",y);
}
