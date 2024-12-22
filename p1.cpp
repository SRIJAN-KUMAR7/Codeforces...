#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), d(n + 1, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 1; i <= n; i++) {
            d[i] = max(d[i - 1], a[i - 1] - (i < n ? b[i] : 0) + d[i - 1]);
        }
        cout << d[n] << endl;
    }
    return 0;
}
