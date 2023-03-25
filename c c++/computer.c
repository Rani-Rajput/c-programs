# include <stdio.h>
void main()
{
    int ch;
    printf(" press 1 for learning c language\n");
    printf(" press 2 for learning c++\n");
    printf(" press 3 for learning java\n");
    printf(" press 4 for learning python\n");
    printf(" press 5 for learning HTML\n");
    printf(" press 6 for learning PHP\n");
    printf(" press 7 for learning R language\n");
    printf("enter what you want to learn\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("c is a general-purpose programming language\n");
        break;
        case 2:
        printf("c++ is an object oriented programming language\n");
        break;
        case 3:
        printf("java is a widely used programming language\n");
        break;
        case 4:
        printf("python is a high level ,general-purpose programming language\n");
        break;
        case 5:
        printf("HTML is a hyper text markup language\n");
        break;
        case 6:
        printf("PHP is a general-purpose scripting language\n");
        break;
        case 7:
        printf("R is a programming language for statistical computing and graphics\n");
        break;
        default:
        printf("wrong choice\n");
    }
}