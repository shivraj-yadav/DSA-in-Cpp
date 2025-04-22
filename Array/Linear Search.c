#include<stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    
    int sele=40;
    int i,f=0;
    
    for(i=0;i<5;i++)
    {
        if(a[i]==sele)
        {
            f=1;
            break;
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