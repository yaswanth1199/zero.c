int main()
{
    int a=0,b=1,c,d,i;
    scanf("%d",&d);
    printf("1 ");
    for(i=0;i<d-1;++i)
    {
        c=a+b;
        a=b;
        
        b=c;
        printf("%d ",c);
    }
    
}
