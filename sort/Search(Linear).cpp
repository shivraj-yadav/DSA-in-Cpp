#include <iostream>

using namespace std;

int main() {
    int a[5];  // C-style array
    int sele, f = 0;

    cout << "Enter array: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> sele;

    // Linear search
    for (int i = 0; i < 5; i++) {
        if (a[i] == sele) {
            f = 1;
            break;  // Break once the element is found
        }
    }

    if (f == 1) {
        cout << "Element found";
    } else {
        cout << "Element not found";
    }

    return 0;
}

