#include<iostream>
#include<algorithm> // Required for sort()
using namespace std;

int main() {
    int arr[5] = {1, 2, 33, 4, 0};

    sort(arr, arr + 5 , greater <int> ()); // Sorting the array

    for (int val : arr) {
        cout << val << endl;
    }

    return 0;
}
