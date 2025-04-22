#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="shiv";
    
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=str[i] - 32;
    }
    printf("%s",str);
    
    return 0;
}