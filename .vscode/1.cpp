// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t; 
//     while (t--) {
//         int n;
//         cin >> n; 
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++) cin >> a[i]; 
//         for (int i = 0; i < n; i++) cin >> b[i];
//         sort(a.begin(), a.end()); 

//         set<int> unique_sums;
//         for (int i = 0; i < n; i++) {
//             unique_sums.insert(a[i]+b[i]);
//         }
//         if (unique_sums.size() >= 3) cout << "YES\n";
//         else cout << "NO\n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        set<int> dA, dB;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            dA.insert(a[i]); 
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            dB.insert(b[i]); 
        }
        if (n == 3) {
            cout << "NO\n";
            continue;
        }
        if (dA.size() > 1 && dB.size() > 1) {
            cout << "YES\n";
            continue;
        }
        set<int> sumSet;
        for (int i = 0; i < n; i++) {
            sumSet.insert(a[i] + b[i]);
        }
        if (sumSet.size() >= 3) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
