# include <stdio.h>
void main()
{
    int n,i,j,k;
    printf("\nenter how many rows you want to print");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("");
        for(k=1;k<=2*i-1;k++)
        printf("*");
        printf("\n");
    }
}