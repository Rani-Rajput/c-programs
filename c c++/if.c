# include <stdio.h>
int main()
{
    int x=0,y=10;
    if(x||y++)
    printf("x=%d,y=%d",x++,--y);
    return 0;
}