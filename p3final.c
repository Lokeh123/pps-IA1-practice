#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum;
  sum=0;
  for(i=1;i<=n;i++)
   {
     sum=sum+i;
   }
   return sum;
}
void output(int n,int sum)
{
  printf("the sum if %d is %d\n",n,sum);
}
int main()
{
  int x,y;
  x=input_n();
  y=sum_n(x);
  output(x,y);
  return 0;
}