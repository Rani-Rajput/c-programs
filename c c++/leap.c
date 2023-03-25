# include <stdio.h>
void main()
{
    int year;
    printf("enter a year you want to check\n");
    scanf("%d",&year);
    if(year%4==0)
    printf("%d is leap year",year);
    else
    printf("%d is not leap year",year);
}