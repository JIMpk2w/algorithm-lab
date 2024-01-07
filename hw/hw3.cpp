#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


pair<int, int> minAdjacentDifference(const vector<vector<int>>& matrix) {
    int minDiff = INT_MAX;
    pair<int, int> minPair;

    for (const auto& row : matrix) {
        for (size_t i = 0; i < row.size() - 1; ++i) { // n**2 รอบ
            int diff = abs(row[i] - row[i + 1]);
            if (diff < minDiff) {
                minDiff = diff;
                minPair = {row[i], row[i + 1]};
            }
        }
    }

    return minPair;
}

int main() {
    vector<vector<int>> matrixA = {
        {1, 6, 5, 3},
        {4, 3, 7, 9},
        {3, 8, 2, 4},
        {6, 9, 5, 7}
    };

    pair<int, int> resultPair = minAdjacentDifference(matrixA);
    cout << "ans: " << resultPair.first - resultPair.second << " (" << resultPair.first << ", " << resultPair.second << ")" << endl;

    return 0;
} // time complexity is O(N^2)
