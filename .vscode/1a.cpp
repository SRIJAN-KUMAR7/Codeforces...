#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
    
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; i++) {
            cin >> b[i];
        }
        bool x = true;
        if (n > 3) { 
            for (int i = 0; i < n - 4; i++) { 
                if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1) {
                    x = false;
                    break;
                }
            }
        }

        cout << (x ? "YES\n" : "NO\n");
    }
    
    return 0;
}
