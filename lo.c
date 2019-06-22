#include<stdio.h>
#include<string.h>
int main()
{
   char s[50],a[50];
   scanf("%s%s",s,a);
   printf("%c",toupper(s[0]));
   printf("%s\n",strlwr(s+1));
    printf("%c",toupper(a[0]));
   printf("%s",strlwr(a+1));
}
