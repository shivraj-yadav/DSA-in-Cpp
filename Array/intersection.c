#include<stdio.h>

int main()
{
    int a[5]={3,4,5,6,10};
    int b[5]={2,4,57,7,12};
    int c[10];
    int m=5,n=5;
    int i=0,j=0,k=0;
    
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>a[j])
        {
            j++;
        }
        else
        {
            c[k++]=a[i++];
            j++;
        }
    }
   
    
    for(i=0;i<k;i++)
    {
        printf("%4d",c[i]);
    }
    
    return 0;
}