#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >>x>>y>>a>>b;
        long long min_xy = min(x, y);
        long long diff_xy = abs(x - y);
        long long cost = min(b, 2 * a) * min_xy + a * diff_xy;
        cout << cost << endl;
    }
    return 0;
}
