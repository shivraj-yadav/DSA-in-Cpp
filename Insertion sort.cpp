#include<stdio.h>
int  main()
{
	int a[5],temp,i,j;
	
	printf("\nEnter Array Elements :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	for(i=1;i<5;i++)
	{
		temp=a[i];
		
		for(j=i-1;j>=0 && a[j]>temp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	printf("Sorted List :");
    for(i=0;i<5;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
