#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string customSort(string str, string order) {
    vector<char> vec(order.begin(), order.end());

    auto key = [&vec, &order](char ch) { 
        auto it = find(vec.begin(), vec.end(), ch);
        return make_pair((it != vec.end()) ? distance(vec.begin(), it) : INT_MAX, ch);
    };

    sort(str.begin(), str.end(), [&](char a, char b) { // sorting O(n log n)
        return key(a) < key(b);
    });

    return str;
}

int main() {
    string order = "edfac";
    string str = "abddefg";

    string result = customSort(str, order);

    cout << result << endl;

    return 0;
} // time complexity is O(n log n)
