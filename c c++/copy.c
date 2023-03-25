# include <stdio.h>
void main()
{
    char a[50],b[50];
    int i;
    i=0;
    printf("\nenter a string:-");
    gets(a);
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("\ncopied string =%s",b);
}