#include<stdio.h>
int LCM(int,int);

int main()
{
  int n,m;
  printf(" enter the 1st number\n");
  scanf("%d",&n);
  printf(" enter the 2st number\n");
  scanf("%d",&m);
  printf("%d", LCM(n,m));
  
  return 0;
}
 int LCM(int n,int m)
 {
    int i;
    for(i=1;i<=n*m;i++)
    {
     if(i%m==0 && i%n==0)
         
    return i;
        
    }
  
 }     

