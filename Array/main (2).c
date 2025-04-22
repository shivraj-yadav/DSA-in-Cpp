/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10]={7,8,10,11,12,15,17,18,19,25};
    int l=7;
    int h=25;
    int n=10;
    int diff=l-0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=diff)
        {
            while(diff<a[i]-i)
            {
                printf("%4d",i+diff);
                diff++;
            }
        }
    }
   
    
 
    
    

    return 0;
}