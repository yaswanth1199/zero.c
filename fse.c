#include<stdio.h>
int main()
{
    char a[100],i,c=0,d=0;
    scanf("%[^\n]",a);
    
    for(i=0;a[i]!='\0';++i)
    {
        ++c;
    }
     for(i=0;a[i]!='\0';++i)
    {
        if(a[i]==' ')
        {
        ++d;}
    }
    printf("%d",c-d);
}
