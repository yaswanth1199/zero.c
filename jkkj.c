#include<stdio.h>
int main()
{
    char a[100],i,d=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';++i)
    {
        if(a[i]==' ')
        {
        d=i;}
    }
     for(i=d+1;a[i]!='\0';++i)
     {
         printf("%c",a[i]);
     }
     printf(" ");
     for(i=0;a[i]!=' ';++i)
     {
         printf("%c",a[i]);
     }
}
