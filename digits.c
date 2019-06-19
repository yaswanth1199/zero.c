#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=0;
    scanf("%d",&i);
    while(i!=0)
    {
        i=i/10;
        ++x;

    }
printf("%d",x);

}

