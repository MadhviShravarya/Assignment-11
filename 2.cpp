#include<stdio.h>
int HCF(int,int);

int main()
{
  int n,m;
  printf(" enter the 1st number\n");
  scanf("%d",&n);
  printf(" enter the 2st number\n");
  scanf("%d",&m);
  printf("%d", HCF(n,m));
  
  return 0;
}
 int HCF(int n,int m)
 {
    int i,hcf;
    for(i=1;i<=n*m;i++)
    {
     if(n%i==0 && m%i==0)
        hcf=i;
    }        
  return hcf;
 }    

