#include<iostream>
using namespace std;
 class main1
{
    
    public: void shape()
    {
        for(int i =1;i<=4;i++)
        {
            for(int j=1;j<=4;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    main1 m;
    m.shape();
    
    return 0;
}