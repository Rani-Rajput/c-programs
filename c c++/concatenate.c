# include <stdio.h>
void main()
{
    char a[50],b[50],c[50];
    int i,j;
    printf("\nenter a first string:-");
    gets(a);
    printf("\nenter a second string:-");
    gets(b);
    i=j=0;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++;j++;
    }
    c[i]='\0';
    puts(c);
}
