#include<stdio.h>
int main()
{
    int a[10]={1,2,2,4,4,5,6,78,78,78};
    int c,j;
    
    for(int i=0;i<10;i++)
    {
        c=1;
        if(a[i]!=-1){
         for(j=i+1;j<10;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
                 a[j]=-1;
             }
         }
        }
         if(c>1)
         {
             printf("%d ELement %d times\n",a[i],c);
         }
    }
    
    return 0;
}