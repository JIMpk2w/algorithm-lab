#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max(vector<int>& satisfaction) {
    sort(satisfaction.begin(), satisfaction.end()); // sorting O(n log n)

    int n = satisfaction.size();
    int max_sum = 0;
    int current_sum = 0;

    for (int i = n - 1; i >= 0; --i) { // n รอบ
        current_sum += satisfaction[i];
        max_sum += current_sum;
    }

    return max_sum;
}

int main() {
    vector<int> satisfaction2 = {2, 1, 4, -1};

    int result2 = max(satisfaction2);

    cout << result2 << endl;

    return 0;
} // time complexity is O(n log n)
