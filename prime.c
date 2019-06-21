#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,y;
    scanf("%d",&s);
   y=s/2;
   while(y!=1)
   {
       if((s%y)==0)
       {
           printf("no");
           break;
       }
       else{
        printf("yes");
        break;

       }
       --y;
   }
}
