#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long total_product = 1;
        for (int i = 0; i < n; ++i) {
            total_product *= a[i];
        }
        long long prefix_product = 1;
        bool found = false;
        for (int k = 1; k < n; ++k) {
            prefix_product *= a[k - 1];
            long long suffix_product = total_product / prefix_product;
            if (prefix_product == suffix_product) {
                cout << k << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     long long t, n, cnt, i, x;
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         cnt = 0;
//         vector<long long> b;
//         for (i = 1; i <= n; i++) {
//             cin >> x;
//             if (x == 2) {
//                 b.push_back(i);
//                 cnt++;
//             }
//         }
//         if (cnt == 0) {
//             cout << 1 << endl;
//             continue;
//         }
//         if (cnt % 2 == 1) {
//             cout << -1 << endl;
//         } else {
//             cout << b[cnt / 2 - 1] << endl; 
//         }
//     }
//     return 0;
// }
