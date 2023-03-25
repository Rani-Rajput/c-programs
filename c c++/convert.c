# include <stdio.h>
void main()
{
    char sentence[100];
    int count ch,i;
    printf("enter a sentence\n");
    for(i=0;(sentence[i]=getchar())!='\n';i++)
    {
        ;
    }
    sentence[i]='\0';
    count= i;
    printf("\nthe given sentence is :%s",sentence);
    printf("\ncase changed sentence is :");
    for(i=0;i<count;i++)
    {
        ch = islower(sentence[i])?toupper(sentence[i]):tolower(sentence[i]);
        putchar(ch);
    }
}