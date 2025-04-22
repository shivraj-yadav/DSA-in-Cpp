#include<stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    
    int sele=400;
    int i,f=0;
    
    int m,s,e;
    s=0;
    e=4;
    while(e>=s)
    {
        m=(s+e)/2;
        
        if(a[m]==sele)
        {
            f=1;
            break;
        }
        else if(a[m]<sele)
        {
            s=m+1;
        }
        else
        {
            e=m-1;
        }
    }
    
    
    if(f==1)
    {
        printf("\nFOUND !!!");
    }
    else
    {
        printf("\n NOT FOUND !!!");
    }
 return 0;   
}