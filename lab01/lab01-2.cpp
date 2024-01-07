#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, x;
    
    cin >> n >> x;
    vector<int> arr(n);

    if (n >= 1 && n <= 200000 && x >= 1 && x <= 1000000000) {
        for (int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        int left = 0, right = n-1, count = 0;

        while (left <= right) {
            if (arr[left] + arr[right] <= x) {
                left++;
            }
            right--;
            count++;
        }
        
        cout << count << endl;
    }
}