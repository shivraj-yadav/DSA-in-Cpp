#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int low = 0, high = num, ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid * mid == num) {
            ans = mid;
            break;
        } 
        else if (mid * mid < num) {
            
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    cout << ans;

    return 0;
}
