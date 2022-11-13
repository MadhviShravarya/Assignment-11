#include<stdio.h>
int square(int);

int main()
{
 int n;
 printf("enter the  number ");
 scanf("%d",&n);
 printf("%d", square(n));
 return 0;
}
int square(int n)
{
  return n*n ;
}                
                 

