#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    
    cin >> n >> k;
    
    if (n >= k && n <= 100000) {
        int arr[n];

        for (int i=0; i<n; i++)
            cin >> arr[i];

        int len = sizeof(arr) / sizeof(arr[0]); 
        sort(arr, arr + len);

        int firstP = 0, secondP = 0;

        for (int i=n-1; i>n-k-1; i--)
            firstP += arr[i];
        
        for (int i=0; i<k; i++) 
            secondP += arr[i];
        
        cout << firstP - secondP;
    }
    
}