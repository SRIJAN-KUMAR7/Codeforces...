// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; 
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n), b(n); 
//         long long ta = 0, tb = 0;
//         for (int i = 0; i<n; i++) {
//             cin >> a[i];
//             ta += a[i]; 
//         }
//         for (int i = 0; i<n; i++) {
//             cin>>b[i];
//             tb += b[i]; 
//         }

      
//         if (ta < tb) {
//             cout << "NO" << endl;
//             continue;
//         }


//         long long maxdeff = 0;
//         for (int i = 0; i < n; i++) {
//             maxdeff = max(maxdeff, static_cast<long long>(b[i] - a[i]));
//         }

//         long long surplus = ta - tb;
//         if (surplus >= maxdeff) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
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

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (b[i] > a[i]) {
                int needed = b[i] - a[i];

        
                for (int j = 0; j < n; j++) {
                    if (i != j) {
                        if (a[j] - b[j] < needed) {
                            possible = false;
                            break;
                        }
                    }
                }
                if (!possible) {
                    break;
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}