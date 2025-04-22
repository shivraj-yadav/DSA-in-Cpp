#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int start, int mid ,int end)
{
    int i =start , j =mid +1;
    vector<int> tempp;
    while(i<= mid && j<=end) 
    {
        if(arr [i] <= arr [j])
        {
            tempp.push_back(arr[i]);
            i++;
        }
        else
        {
            tempp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i<= mid)
    {
     tempp.push_back(arr[i]);
            i++;   
    }
     while(j<= end)
    {
     tempp.push_back(arr[j]);
            j++;   
    }
    
    
    for(int inx=0 ;inx < tempp.size() ;inx++)
    {
        arr[inx+start]=tempp[inx];
    }
}

void mergesort(vector<int> &arr,int start,int end)
{
   if (start >= end) return; 

    int mid = start + (end - start) / 2;

    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
 
int main()
{
    vector<int> arr={14,7,3,12,1};
    mergesort(arr,0,arr.size()-1);
    
    for(int val : arr)
    {
        cout<<val<<" ";
    }
    return 0;
}