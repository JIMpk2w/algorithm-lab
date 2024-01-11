#include <iostream>
#include <vector>

using namespace std;

vector<int> convertToBalancedBinaryTree(const vector<int>& arr) {
    int n = arr.size();
    
    int rootIndex = n / 2;
    int rootValue = arr[rootIndex];

    vector<int> leftSubtree(arr.begin(), arr.begin() + rootIndex);
    vector<int> rightSubtree(arr.begin() + rootIndex + 1, arr.end());

    vector<int> result;
    result.push_back(rootValue);
    result.insert(result.end(), leftSubtree.begin(), leftSubtree.end());
    result.insert(result.end(), rightSubtree.begin(), rightSubtree.end());

    return result;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5, 6};
    vector<int> ans = convertToBalancedBinaryTree(A);

    for (int i : ans) { // n รอบ
        cout << i << " ";
    }

    return 0;
} // time complexity is O(n)
