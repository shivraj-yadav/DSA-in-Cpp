#include <iostream>
using namespace std;

int main()
{
 int a[5]={5,4,3,2,1};
 int i,j,k,temp;
 
 
 for(i=0;i<5;i++)
 {
     k=i;
     for(j=i+1;j<5;j++)
     {
         if(a[j]<a[k])
         {
             k=j;
         }
     }
     if(i != k)
     {
         temp=a[i]; 
            a[i]=a[k]; 
            a[k]=temp; 
     }
 }
 
 
 
 for(int val :a)
 {
     cout<<val<<" ";
 }

    return 0;
}