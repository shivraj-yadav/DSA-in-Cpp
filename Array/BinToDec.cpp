#include <iostream>
using namespace std;
int BinToDec(int DecNum)
{
    int ans=0, power=1;
    
    while(DecNum>0)
    {
        int rem =DecNum%10;
        DecNum /=10;
        
        ans +=(rem *power);
        power*=2;
    }
    return ans;
}
int main()
{
    
    cout<<BinToDec(110);
    return 0;
}
