#include <stdio.h>

int main() {
    int a[5] = {55, 44, 33, 22, 11};
    int max = a[0], second_max = -1;

    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            second_max = max;
            max = a[i];
        } else if (a[i] > second_max && a[i] != max) {
            second_max = a[i];
        }
    }

    if (second_max == -1) {
        printf("No second largest number found.\n");
    } else {
        printf("Second largest number is: %d\n", second_max);
    }

    return 0;
}
