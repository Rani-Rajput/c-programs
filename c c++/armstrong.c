# include <stdio.h>
void main()
{
    int num,r,sum=0,temp;
    printf("\nenter a number");
    scanf("%d",&num);
    for(temp=num;num!=0;num=num/10)
    {
        r=num%10;
        sum=sum+(r*r*r);
       if(sum==temp)
        printf("%d is an armstrong number\n",temp);
        else
        printf("%d is not an armstrong number\n",temp);
    }
}
