# include <stdio.h>
void main()
{
    int n,i,j;
    printf("\nenter how many rows you want to print");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i==j)
        printf("1");
        else
        printf("0");
        printf("\n");
    }
}