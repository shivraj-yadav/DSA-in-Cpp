#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "shivraj";
    int length = strlen(str); 
    printf("Length of the string: %d\n", length);
    int i=0;
    
    while(str[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}