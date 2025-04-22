#include <iostream>
using namespace std;

int main()
{
 int arr[5]={5,4,3,2,1};
 int temp,j;
 
 for(int i =1;i<5;i++)
 {
     temp= arr[i];
     for( j=i-1; j>=0 && temp<arr[j];j--)
     {
         arr[j+1]=arr[j];
     }
     arr[j+1]=temp;
 }
 
 for(int val :arr)
 {
     cout<<val<<" ";
 }

    return 0;
}