
#include <iostream>
using namespace std;

int main()
{
   int i,j,k;
  int num=1;
   for(i=1;i<=4;i++)
   {
       for(j=1;j<i;j++)
       {
           cout<<" ";
       }
       for(k=i;k<=4;k++)
       {
           cout<<num;
       }
       num++;
       cout<<endl;
       
   }

    return 0;
}