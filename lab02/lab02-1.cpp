#include <iostream>
#include <climits>

using namespace std;

bool isDNA(char c) {
    return (c == 'A' || c == 'G' || 
            c == 'C' || c == 'T');
}

int main() {
    int count = 0, max = INT_MIN;
    char check = '#';
    string n;
    cin >> n;

    for (size_t i = 0; i < n.length(); i++) {
        if ((check == '#' || check == n[i]) && isDNA(n[i]) == true) {    
            count++;

            if (count > max) {
                max = count;
            }

        } else if (isDNA(n[i]) == false) {
            count = 0;  
        } else {
            count = 1;
        }

        check = n[i];

    }

    (max != INT_MIN) ? cout << max : cout << 0;
        
}