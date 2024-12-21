#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }
        sort(points.begin(), points.end());

        bool possible = false;

        if (points[1] - points[0] > 1) {
            possible = true;
        }

       
        if (points[n-1] - points[n-2] > 1) {
            possible = true;
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
