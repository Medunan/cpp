#include<stdio.h>
int main()
{
    int n,r,s,t,l=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        l=r;
        t=t/10;
    
    }
    printf("%d",l);
}


