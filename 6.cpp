  #include<stdio.h>
void primeN(int,int);

int main()
{
  int m, n;
  printf(" enter the min number\n");
  scanf("%d",&m); 
  printf(" enter the max number\n");
  scanf("%d",&n); 
  primeN(m,n);
  return 0;
}
void primeN(int a,int b)
{
int i,j,count;
for(j=a;j<=b;j++)
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

