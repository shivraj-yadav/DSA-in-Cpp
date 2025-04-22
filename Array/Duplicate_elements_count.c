/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10]={3,6,8,8,10,12,15,15,15,20};
    int j,i;
    for( i=0;i<10;i++)
    {
       if(a[i]==a[i+1])
       {
           j=i+1;
           while(a[i]==a[j]) j++;
           printf("%d comes at %d times\n",a[i],j-i);
           
           i=j;
       }
    }

    return 0;
}
