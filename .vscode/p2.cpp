#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n; // n > 4
        cin >> n;
        vector<int> a(n);
        int cnt0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                cnt0++;
            }
        }
        int op = 0;
        vector<pair<int, int>> ops;
        int l = -1;
        int r = -1;

        if (cnt0 % 2 == 0) {
            for (int i = 0; i < n - 1; i++) {
                if (a[i] == 0 && a[i + 1] == 0) {
                    l = i + 1;
                    r = i + 2;
                    op++;
                    ops.push_back({l, r});
                }
            }
        } else {
            for (int i = 0; i < n - 1; i++) {
                if (a[i] == 0 && a[i + 1] != 0) {
                    l = i + 1;
                    r = i + 1;
                    op++;
                    ops.push_back({l, r});
                }
            }
        }

        cout << op << "\n";
        for (auto &p : ops) {
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}
