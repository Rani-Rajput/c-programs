# include <stdio.h>
int main()
{
    char a[50];
    int i;
    printf("\nenter a name:-");
    gets(a);
    i=0;
    while(a[i]!='\0')
    i++;
    printf("\ntotal number of character=%d",i);
}