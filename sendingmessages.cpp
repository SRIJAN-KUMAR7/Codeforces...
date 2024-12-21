#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        long long f;
        cin >> n >> f >> a >> b;

        vector<long long> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        bool kela = true;

        if (f - (ar[0]) * a > 0 || f - b > 0) {
            f = f - min(a * ar[0], (long long)b);
        } else {
            kela = false;
        }

        for (int i = 1; i < n; i++) {
            if (f - (ar[i] - ar[i - 1]) * a > 0 || f - b > 0) {
                f = f - min(a * (ar[i] - ar[i - 1]), (long long)b);
            } else {
                 kela= false;
            }
        }

        if (kela) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
