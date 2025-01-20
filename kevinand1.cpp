#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> even, odd;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }

        vector<int> arr;
        for (int x : even) arr.push_back(x);
        for (int x : odd) arr.push_back(x);
        int s = 0, p = 0;
        for (int x : arr) {
            s += x;
            if (s % 2 == 0) {
                p++;
                while (s % 2 == 0) s /= 2;
            }
        }
        cout << p << "\n";
    }
    return 0;
}
