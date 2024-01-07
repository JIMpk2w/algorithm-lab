#include <iostream>

using namespace std;

bool searchX(int A[5][5], int n, int x) {
    int i = 0, j = n - 1;

    while (i < n && j >= 0) { // n รอบ
        if (A[i][j] == x) {
            return true;
        } else if (A[i][j] > x) {
            j--;
        } else {
            i++;
        }
    }

    return false;
}

int main() {
    int n = 5;
    int A[5][5] = {
        {1, 3, 4, 5, 7},
        {2, 4, 9, 11, 16},
        {6, 7, 13, 14, 19},
        {8, 11, 15, 17, 20},
        {9, 12, 16, 19, 21}
    };

    int x;
    cout << "Enter the number to search for (x): ";
    cin >> x;

    if (searchX(A, n, x)) {
        cout << x << " is found";
    } else {
        cout << x << " is not found";
    }

    return 0;
} // time complexity is O(N)