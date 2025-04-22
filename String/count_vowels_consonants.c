#include<stdio.h>
int main()
{
    
    char str[]="A Man";
    int i=0,v=0,c=0;
    
    while(str[i]!='\0')
    {
       char ch=str[i];
       
       if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z'))
       {
           if(ch == 'a' || ch == 'A' || ch == 'e'|| ch== 'E' || ch == 'i' ||ch == 'I' || ch == 'o' || ch == 'O' ||  ch == 'u' || ch == 'U')
           {
               v++;
           }
           else
           {
               c++;
           }
       }
       i++;
    }
    printf("Vowels = %4d  Consonents = %4d ",c,v);
    return 0;
}