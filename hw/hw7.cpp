#include <iostream>
#include <algorithm>

using namespace std;

int longeststring(const string& s, int k) {
    int n = s.length();
    int charCount[128] = {0};
    int start = 0, distinctCount = 0, maxLength = 0;

    for (int end = 0; end < n; ++end) { // n รอบ
        if (charCount[s[end]] == 0) {
            distinctCount++;
        }
        charCount[s[end]]++;

        while (distinctCount > k) {
            charCount[s[start]]--;
            if (charCount[s[start]] == 0) {
                distinctCount--;
            }
            start++;
        }

        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s = "ababcaaadc";
    int k = 2;
    int result = longeststring(s, k);
    
    cout << "Result = " << result << endl;

    return 0;
} // time complexity is O(N)
