#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,y,x;
    scanf("%d%d",&s,&y);
    x=s+1;
    if((s%2)==0)
    {

        while(x+1<y)
        {
          printf("%d ",x+1);
            x=x+2;
        }
    }
    else
    {
        while(x<y)
        {
          printf("%d ",x);
            x=x+2;
        }
    }




}
