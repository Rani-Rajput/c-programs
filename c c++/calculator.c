# include <stdio.h>
void main()
{
    int a,b,c,ch;
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");

    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("enter any two number\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("result is =%d",c);
        break;
        case 2:
        printf("enter any two number\n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("result is =%d",c);
        break;
        case 3:
        printf("enter any two number\n");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("result is =%d",c);
        break;
        case 4:
        printf("enter any two number\n");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("result is =%d",c);
        break;
        default:
        printf("wrong choice");
    }
}