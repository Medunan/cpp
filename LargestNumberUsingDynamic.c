#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l=0,n,i,*p;
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("memory full!!");
    }
    else
    {
        printf("memory allocated\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)>l)
        l=*(p+i);
    }
    printf("the largest number is=%d",l);
    return 0;
}




