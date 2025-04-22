#include<iostream>
#include<vector>
using namespace std;
int partion(vector<int> &arr,int start ,int end)
{
      int index = start - 1;
    int pivot = arr[end];
    
    for(int j=start;j<end;j++)
    {
        if(arr[j]<pivot)
        {
            index++;
            swap(arr[j],arr[index]);
        }
    }
    index++;
    swap(arr[end], arr[index]); // Final pivot placement
    return index;
    
}
void quicksort(vector<int> &arr,int start ,int end)
{
    if(start< end)
    {
       int pivot= partion(arr, start , end);
        
        quicksort(arr,start,pivot-1);
        quicksort(arr,pivot+1,end);
    }
}
int main()
{
    vector<int> arr={5,2,6,4,1,3};
    quicksort(arr,0,arr.size()-1);
    
    for(int val : arr)
    {
        cout<<val<<" ";
    }
    return 0;
}
