#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int ln = l;
        int maxdif = -1;
        for (int i = l; i <= r; i++) {
            int num = i;
            int maxd = 0, mind = 9;
            while (num > 0) {
                int digit = num % 10;
                maxd = max(maxd, digit);
                mind = min(mind, digit);
                num /= 10;
            }
            int diff = maxd - mind;
            if (diff > maxdif) {
                maxdif = diff;
                ln = i;
            }
            if (maxdif == 9) break; 
        }
        cout << ln << endl;
    }
    return 0;
}
