/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,6};
    int n=6;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    int Total=(n*(n+1))/2;
    
    int Missing_num=Total-sum;
    printf("%4d Missing Number ",Missing_num);
 
    
    

    return 0;
}