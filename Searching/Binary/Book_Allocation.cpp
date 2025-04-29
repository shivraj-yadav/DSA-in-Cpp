#include<iostream>
using namespace std;
#include<vector>
bool isvalid(vector<int>& arr , int n ,int m , int maxAllowPages)
{
    int students = 1, pages =0;
    
    for(int i = 0 ; i < n ; i++)
    {
         if (arr[i] > maxAllowPages) return false;
       if (pages + arr[i] > maxAllowPages) {
            students++;
            pages = arr[i]; 
        } else {
            pages += arr[i];
        }
    }
    
    return students > m ? false : true ;
}
int allocateBook(vector<int>& arr , int n ,int m)
{
     if (m > n) return -1;
     int ans =0;
    int sum =0;
    for(int i =0 ;i < n ; i++)
    {
        sum += arr[i];
    }
    
    int low = 0 , high = sum ;
    while(low <= high )
    {
        int mid = low +(high - low)/2;
        
        if(isvalid(arr, n, m, mid)) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> books={2,1,3,4};
    int m = 2 , n =4;
    cout<<allocateBook(books , n , m)<<endl;
    
    return 0;
}