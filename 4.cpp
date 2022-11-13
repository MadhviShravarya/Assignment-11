     #include<stdio.h>
int nextprime(int);

int main()
{
  int min,result;
  printf(" enter the min number\n");
  scanf("%d",&min); 
  result=nextprime(min);
  printf("%d\n",result);
  return 0;
}
int nextprime(int m)
{
int i,j,count;
for(j=m;1;j++)
{ 
count=0;
for(i=2;i<j/2;i++)
{
  if(j%i==0)
    count++;
}
if(count==0 && j!=1)
 {
  return j;
    break;
 }
}

}    

