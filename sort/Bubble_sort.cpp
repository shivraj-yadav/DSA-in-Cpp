#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int i,j,temp;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j] > arr [j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[]={4,3,2,1,66}, n=5;
    
    bubble_sort(arr,n);
    for(int val : arr)
    {
        cout<<val<<" ";
    }
    

    return 0;
}