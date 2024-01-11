#include <iostream>
#include <vector>

using namespace std;

bool check(int arr[], int n) {
    bool check;
    for (int i = 0; i < n; i++) { // n รอบ
        if (arr[i] == i) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[3] = {1, 2, 3};
    bool result = check(arr, 3);

    cout << (result ? "True" : "False") << endl;

    return 0;
} // time complexity is O(N)
