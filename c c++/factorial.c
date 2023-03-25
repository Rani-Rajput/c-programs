# include <stdio.h>
void main()
{
    int f=1,i,n;
    printf("\nenter a number to find factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    f=f*i;
    printf("\n factorial =%d",f);
}