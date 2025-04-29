#include<iostream>
#include <algorithm>

using namespace std;
#include<vector>
int isValid(vector<int>& arr , int n ,int p , int maxTimeAllocate)
{
    int painters = 1 , Time = 0;
    
    for(int i =0 ;i < n ; i++)
    {
        if(maxTimeAllocate < arr[i]) return false;
        if(Time + arr[i] <= maxTimeAllocate)
        {
            Time += arr[i];
        }
        else
        {
            painters++; 
            Time = arr[i];
        }
    }
    return painters <= p;
}
int allocateTime(vector<int>& arr , int n ,int p)
{
    int sum = 0 ,ans =0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    
    int low = *max_element(arr.begin() , arr.end());
    int high = sum;
    
    while(low <= high)
    {
        int mid = low + (high - low) /2;
        
        if(isValid(arr,n,p,mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else    low = mid + 1;
    }
    
    return ans;
}
int main()
{
    vector<int> arr ={40,30,10,20};
    int n = 4 , p = 2;
    cout<<allocateTime(arr, n, p)<<endl;
    return 0;
}