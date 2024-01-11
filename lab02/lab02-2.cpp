#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, total;
    cin >> a >> b;
    string num;

    for(int i = a; i <= b; i++) {
        
        total = 0;
        for (char j : to_string(i)) {
            total += j - '0';
        }
        
        if (__gcd(i, total) != 1) cout << i << " ";
    }

}