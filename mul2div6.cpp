#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c = 0;
        
        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6;
                c++;
            } else if (n % 3 == 0) {
                n *= 2;
                c++;
            } else {
                c = -1;
                break;
            }
        }
        
        if (n == 1) {
            cout << c << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
