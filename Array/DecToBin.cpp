#include <iostream>
using namespace std;
int DecToBin(int Decnum)
{
    int ans=0 ,power=1;
    
    while(Decnum>0)
    {
        int rem= Decnum %2;
        Decnum /=2;
        
        ans += (power* rem);
        power*=10;
    }
    return ans;
}
int main()
{
    
    cout<<DecToBin(5);
    return 0;
}
