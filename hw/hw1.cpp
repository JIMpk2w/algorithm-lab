#include <iostream>
#include <vector>

using namespace std;

int findFrequentElement(const vector<int>& arr) {
    int candidate = -1;
    int count = 0;

    for (int num : arr) { // n รอบ
        if (count == 0) {
            candidate = num;
            count = 1;
        } else {
            (num == candidate) ? ++count : --count;
        }
    }

    count = 0;
    for (int num : arr) { // n รอบ
        if (num == candidate) {
            ++count;
        }
    }

    return (count > arr.size() / 2) ? candidate : -1;
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4};
    int result = findFrequentElement(arr);

    if (result != -1) { 
        cout << "ans: " << result << endl;
    }

    return 0;
} // time complexity is O(N) + O(N) = O(N)
