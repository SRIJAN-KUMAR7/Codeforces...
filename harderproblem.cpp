#include <bits/stdc++.h>
using namespace std;//wrong solution still 


void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            b[i] = a[i]; 
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
