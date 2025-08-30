#include<stdio.h>
int main()
{
    int a[5],i,pos,ele;
    
    printf("Enter Array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Insertion element :");
    scanf("%d",&ele);
    
    printf("Enter position :");
    scanf("%d",&pos);
    --pos;
    
    for(i=4;i>=pos;i--)
    {
        a[i+1]=a[i];
        
    }
     a[pos]=ele;
    printf("Enter Array :");
    for(i=0;i<=5;i++)
    {
        printf("\t%d",a[i]);
    }
    
    return 0;
}
