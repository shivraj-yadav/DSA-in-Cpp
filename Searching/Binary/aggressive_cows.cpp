#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
bool isPossible(vector<int>& arr ,int c , int n , int minAllowDist)
{
    int cow = 1 , lastpos = arr[0];
    
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] - lastpos >= minAllowDist)
        {
            cow++;
            lastpos = arr[i];
        }
        if(cow == c) return true ;
    }
    return false;
}
int getDistance(vector<int>& arr ,int c , int n)
{
    sort(arr.begin() , arr.end());
    
    int low = arr[0] , high = arr[n-1] , ans =0;
    
    while(low <= high)
    {
        int mid = low + (high - low ) /2;
        
        if(isPossible(arr , c , n , mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    return ans ;
}
int main()
{
    vector<int> stalls={ 1, 2, 8, 4, 9 };
    int cows = 3 , n = 5;
    
    cout<< getDistance(stalls, cows,n)<<endl;
    
    return 0;
}