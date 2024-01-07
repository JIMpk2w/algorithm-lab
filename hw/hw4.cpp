#include <iostream>

using namespace std;

int findMissingNumber(int A[], int n) {
    int totalSum = (n + 1) * (n + 2) / 2;

    int arraySum = 0;
    for (int i = 0; i < n; i++) { // n รอบ
        arraySum += A[i];
    }

    int missingNumber = totalSum - arraySum;

    return missingNumber;
}

int main() {
    int n = 5;
    int A[n] = {2, 6, 5, 1, 3, 7};

    int missingNumber = findMissingNumber(A, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
} // time complexity is O(N)
