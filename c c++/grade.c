# include <stdio.h>
void main()
{
    float a,b,c,d,e,total,per;
    printf("\nenter marks of five different subject");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    per=total/5;
    printf("\ntotal marks=%f\npercentage=%f",total,per);
    if(per>=90)
    printf("grade A");
    else
    if(per>=80)
    printf("grade B");
    else
    if(per>=70)
    printf("grade C");
    else
    if(per>=60)
    printf("grade D");
    else
    if(per>=40)
    printf("grade E");
    else
    printf("grade F");
}
