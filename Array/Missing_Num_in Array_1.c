/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5]={7,8,10,11,12};
    int l=7;
    int n=5;
    int diff=l-0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=diff)
        {
            printf("%4d Missing Number ",i+diff);
            break;
        }
    }
   
    
 
    
    

    return 0;
}
