#include<stdio.h>
int main()
{
    int b,i;
    char a[50];
    scanf("%s",a);
    b=strlen(a);
    
    for(i=b-1;i>-1;--i)
    {
    printf("%c",a[i]);
    
}}
