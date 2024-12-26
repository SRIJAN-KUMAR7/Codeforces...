#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int operations = 1; 
        int range_end = 1; 
        while (range_end < n) {
            range_end = range_end * 2 + 2; 
            operations++; 
        }
        cout << operations << '\n'; 
    }

    return 0;
}
