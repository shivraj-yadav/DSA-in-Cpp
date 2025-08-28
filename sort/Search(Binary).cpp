#include <iostream>

using namespace std;

int main() {
    int a[5];  // C-style array
    int sele, b, e, m, f = 0;

    cout << "Enter Array: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    // Sorting the array using simple bubble sort
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nElements in Sorted order: ";
    for (int i = 0; i < 5; i++) {
        cout << "\t" << a[i];
    }

    cout << "\nEnter Search element: ";
    cin >> sele;

    // Binary Search
    b = 0;
    e = 4;
    while (b <= e) {
        m = (b + e) / 2;
        if (a[m] == sele) {
            f = 1;
            break;
        } else if (a[m] < sele) {
            b = m + 1;
        } else {
            e = m - 1;
        }
    }

    if (f == 1) {
        cout << "\nElement found!!!";
    } else {
        cout << "\nElement not found!!!";
    }

    return 0;
}

