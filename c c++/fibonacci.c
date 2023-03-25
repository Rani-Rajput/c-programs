# include <stdio.h>
void main()
{
    int a=1,b=0,c=0,n,i;
    printf("\nhow many terms you want to print");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d",c);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}