#include<stdio.h>

int main()
{
    int a[5]={11,15,18,19,26};
    int b[5]={1,11,14,16,19};
    int c[10];
    int m=5,n=5;
    int i=0,j=0,k=0;
    
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i++];
            j++;
        }
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=a[j++];
    }
    
    for(i=0;i<k;i++)
    {
        printf("%4d",c[i]);
    }
    
    return 0;
}