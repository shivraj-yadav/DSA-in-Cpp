#include<stdio.h>
int main()
{
    int a[10]={6,3,8,10,16,7,5,2,9,4};
   
   int sum=10,t,j;
   
   for(int i=0;i<10;i++)
   {
       t=sum-a[i];
       for(j=i+1;j<10;j++)
       {
           if(t==a[j])
           {
               printf("\n%d and %d makes %d Addition",a[i],a[j],sum);
           }
       }
   }
    
    return 0;
}