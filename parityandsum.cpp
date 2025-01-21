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
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int s = -1;
        vector<int> v;
        
        // Separate even numbers 
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                v.push_back(a[i]);
            } else if (a[i] > s) {
                s = a[i];
            }
        }

        sort(v.begin(), v.end()); 
        if (s == -1 || v.empty()) {
            cout << 0 << endl;
            continue;
        }

        int ans = v.size();
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < s) {
                s += v[i];
            } else {
                ans += 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}