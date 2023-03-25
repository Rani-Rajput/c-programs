# include <stdio.h>
int main()
{
    int a,b,c;
    b=2;
    a=2*(b++);
    c=2*(++b);
    printf("%d%d%d",a,b,c);
    return 0;

}