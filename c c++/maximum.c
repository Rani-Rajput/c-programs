# include <stdio.h>
void main()
{
    int a[20],n,i,max =-32767,smax=-32768;
    printf("\nhow many elements you want to enter(max-5");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            smax=max;
            max=a[i];
        }
        else 
        if(smax<a[i]&&max!=a[i])
        smax =a[i];
    }
    printf("\nmax=%d,smax=%d",max,smax);
}