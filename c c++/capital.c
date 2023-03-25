# include <stdio.h>
void main()
{
    char ch;
    printf("\nenter a character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("\n the character is upper case letter");
    else
    if(ch>=97&&ch<=122)
    printf("\n the character is lower case letter");
    else 
    if(ch>=48&&ch<=57)
    printf("\n the character is digit");
    else 
    printf("\n the character is a special symbol");
     }