#include<stdio.h>
#include<string.h>
void sort(char x[20],int la)
{ 
    char t;
    int i,j;
    for(i=0;i<la;i++)
     {
         for(j=i+1;j<=la;j++)
         {
             if(x[i]<x[j])
             {
                 t=x[i];
                 x[i]=x[j];
                 x[j]=t;
             }
         }
     }
}
int main()
{
 char a[20],b[20],ta[20],tb[20],t;
 int i,j,la,lb;
 gets(a);
 gets(b);
 strcpy(ta,a);
 strcpy(tb,b);
 //strlwr(a);
 //strlwr(b);
 la=strlen(a);
 lb=strlen(b);
 if(la==lb)
 {
   sort(a,la);
   sort(b,la);
  if(strcmp(a,b)==0)
    {
        printf("anagram");
    }
  else
    {
        printf("not anagram");
    }
  }
  else
  {
      printf("not anagram");
  }
}







