#include<stdio.h>
void primeN(int);

int main()
{
  int n,result;
  printf(" enter the limit number\n");
  scanf("%d",&n); 
  primeN(n);
  return 0;
}
void primeN(int m)
{
int i,j,count;
for(j=1;j<=m;j++)
{ 
count=0;
for(i=2;i<j/2;i++)
{
  if(j%i==0)
    count++;
}
if(count==0 && j!=1)
 {
  printf("%d\n",j);
 }
}

}                
    

