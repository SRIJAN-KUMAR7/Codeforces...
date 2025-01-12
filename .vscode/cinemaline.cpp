#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int c25 = 0, c50 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 25) {
            c25++;
        } else if (a[i] == 50) {
            if (c25 > 0) {
                c25--;
                c50++;
            } else {
                cout << "NO\n";
                return 0;
            }
        } else if (a[i] == 100) {
            if (c50 > 0 && c25 > 0) {
                c50--;
                c25--;
            } else if (c25 >= 3) {
                c25 -= 3;
            } else {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}
