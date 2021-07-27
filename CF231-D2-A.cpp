#include<stdio.h>
int main()
{
   int n,a,b,c,sum=0,ct=0;
   scanf("%d",&n);
   while (n--)
   {
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    if(sum>=2) ct++;
    sum=0;
   }
printf("%d\n",ct);
    return 0;
}