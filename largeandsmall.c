#include<stdio.h>
int main()
{
    int n,a[50],mi=0,ma,i,h,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ma=a[0];
    for(i=0;i<n;i++)
    {
        if(mi<a[i])
        {
            mi=a[i];
            l=mi;
        }
        else if(ma>a[i])
        {
            ma=a[i];
            h=ma;
        }
    }
    printf("the highest:%d",h);
    printf("the loweset:%d",l);
}



