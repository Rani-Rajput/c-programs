# include <stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\nenter elements of first matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nenter matrix element-");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter elements of second matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nenter matrix element-");
            scanf("%d",&b[i][j]);
        }
    }
    /*addition of matrix*/
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("\naddition of first and second matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
}