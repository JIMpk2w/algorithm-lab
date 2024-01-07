#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {7, -3, 5, -1, -8, 6, 2, -4};
    vector<int> pnum;
    vector<int> nnum;

    for (int num : arr) { // n รอบ
        (num < 0) ? nnum.push_back(num) : pnum.push_back(num);
    }

    nnum.insert(nnum.end(), pnum.begin(), pnum.end());

    cout << "[";
    for (auto num = nnum.begin(); num != nnum.end(); ++num) { // n รอบ
        (next(num) == nnum.end()) ? cout << *num : cout << *num << ", ";
    }
    cout << "]" << endl;
    
    return 0;
} // time complexity is O(N) + O(N) = O(N)
