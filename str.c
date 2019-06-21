#include<stdio.h>
int main()
{
    int b,i;
    char a[50];
    scanf("%s",a);
    b=strlen(a);
    for(i=1;i<b;)
    {
    printf("%c",a[i]);
    printf("%c",a[i-1]);
    i=i+2;
}}
