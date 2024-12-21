#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int rg = 0;
        int gg = 0;
        
        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) {
                rg += a[i];
            } else if (a[i] == 0 && rg > 0) {
                rg--;
                gg++;
            }
        }

        cout << gg << endl;
    }
    
    return 0;
}
