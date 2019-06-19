#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f;
char c;
scanf("%c",&c);
f=c;
if(f>96&&f<123)
{
if(f==97||f==101||f==105||f==111||f==117)
{
    printf("Vowel");
}
else
{
    printf("Consonant");
}}
else
{
        printf("invalid");
}
}

