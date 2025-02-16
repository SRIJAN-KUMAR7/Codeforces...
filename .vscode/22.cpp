#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> f;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            f[arr[i]]++;
        }
        vector<bool> same(n, false);
        for (int i = 0; i < n; i++) {
            if (f[arr[i]] == 1) {
                same[i] = true;
            }
        }
        int ll = -1;
        int rr = -1;
        int max_len = 0;
        for (int l = 0; l < n; l++) {
            if (same[l]) {
                int r = l;
                while (r < n && same[r]) {
                    r++;
                }
                int k = r - l;
                if (k > max_len) {
                    max_len = k;
                    ll = l + 1;  
                    rr = r;      
                }
                l = r - 1; 
            }
        }
        if (max_len == 0) {
            cout << "0\n";
        } else {
            cout << ll << " " << rr << "\n";
        }
    }

    return 0;
}
