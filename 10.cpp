#include<stdio.h>
int fact(int);
int sum(int);
int main()
{
 int n;
 printf("enter the nth number ");
 scanf("%d",&n);
 printf("%d", sum(n));
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

int sum(int x)
{
  int s=0,i;
  for(i=1;i<=x;i++)
   {
     s= s + fact(i)/i;
   }
   return s;
}    
          

