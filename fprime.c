#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,y,a=0;
    scanf("%d",&s);
   y=s-1;
  for(y=s-1;y>1;--y)
   {
       if((s%y)==0)
       {
           ++a;

       }
   }
   if(a==0){printf("yes");}
   else{printf("no");}



}
