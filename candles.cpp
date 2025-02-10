#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        for (int k = 2; ; k++) {
            int S = pow(2, k) - 1; // 2^k - 1
            if (n % S == 0) {
                cout << n / S << "\n";
                break;
            }
        }
    }
    
    return 0;
}