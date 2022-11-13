#include<stdio.h>
int prime(int);

int main()
{
  int n ,result;
  printf(" enter the  number\n");
  scanf("%d",&n); 
  result= prime(n);
  if(result==1)
    printf("\n is prime \n");
  else
    printf("\n is not a prime\n");
  return 0;
}
int prime(int n)
{
int i;

for(i=2;i<n/2;i++)
{
  if(n%i==0)
    return 0;   
}
return 1;

}  

