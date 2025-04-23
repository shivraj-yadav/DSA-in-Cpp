#include <iostream>
using namespace std;

int main() {
    int n = 3;

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int m[3][3];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[j][n-1-i] = matrix[i][j];
        }
    }

    cout << "The original matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "The rotated matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
