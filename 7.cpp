#include<stdio.h>
void fibonacci(int);

int main()
{
  int  n;
  printf(" enter the limit number\n");
  scanf("%d",&n); 
  fibonacci(n);
  return 0;
}
void fibonacci(int m)
{
  int a=1,b=0,c=0,i=1;
  printf("%d\n",a);
  while(i<=m)
  {
    c=a+b;
    printf("%d\n",c);
    b=a;
    a=c;
    i++;
  }
  
}                
    

