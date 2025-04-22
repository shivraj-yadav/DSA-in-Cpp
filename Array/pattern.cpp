
#include <iostream>
using namespace std;

int main()
{
   char i,j;
  char num='a';
   for(i='a';i<='d';i++)
   {
       for(j='a';j<=i;j++)
       {
           cout<<num<<" ";
           num++;
       }
       
       cout<<endl;
       
   }

    return 0;
}