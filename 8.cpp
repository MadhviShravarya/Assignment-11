#include<stdio.h>
int fact(int);
int comb(int,int);
int pascal(int);
int main()
{
 int n;
 printf("enter the number ");
 scanf("%d",&n);
 pascal(n);
 return 0;
}

int fact(int n)
{ 
int f=1,i;
for(i=1;i<=n;i++)
{
f=f*i;

}
return f;
}

int comb(int n,int r)
{
  return fact(n)/(fact(r)*fact(n-r));
}
int pascal(int n)
{
  int i,j;
  for(i=0;i<=n;i++)
  {
   for(j=0;j<=i;j++)
   {
    printf("%d", comb(i,j));
    }
    printf("\n");
  }

}    
           

