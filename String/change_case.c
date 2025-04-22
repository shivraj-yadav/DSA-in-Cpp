#include <stdio.h>

void changeCase(char str[]) {
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
        }
        i++;
    }
}

int main() {
    char str[] = "ShivRaj";

    printf("Original String: %s\n", str);
    changeCase(str);
    printf("Case Changed String: %s\n", str);

    return 0;
}
