/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={11,22,33,44,55};
    
    int min=a[0],max=a[0],i;
    
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        else if(a[i]>max)
        {
            max=a[i];
        }
        else
        {
            
        }
    }
    printf("%4d MIN %4d MAX",min,max);

    return 0;
}