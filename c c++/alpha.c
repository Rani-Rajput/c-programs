# include <stdio.h>
void main()
{
    int n,i,j;
    char ch;
    printf("\nenter how many rows you want to print");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        printf("%c",ch++);
        printf("\n");
    }
}