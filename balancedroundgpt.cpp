#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int mb = 1;
        int cs = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] <= k) {
                cs++;
            } else {
                mb = max(mb, cs);
                cs = 1; 
            }
        }
        mb = max(mb, cs);
        cout << n - mb << endl;
    }
    
    return 0;
}
