// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
        
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
        
//         // Initialize the difference array
//         vector<long long> diff(n + 1, 0);
//         long long max_value = *max_element(a.begin(), a.end());
        
//         while (m--) {
//             char op;
//             int l, r;
//             cin >> op >> l >> r;

//             // Apply the difference array approach
//             for (int i = 0; i < n; ++i) {
//                 if (a[i] >= l && a[i] <= r) {
//                     if (op == '+') {
//                         a[i]++;
//                     } else if (op == '-') {
//                         a[i]--;
//                     }
//                 }
//             }

//             // Calculate the maximum value after the operation
//             max_value = *max_element(a.begin(), a.end());
//             cout << max_value << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);
        long long max_value = numeric_limits<long long>::min();

       
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] > max_value) {
                max_value = a[i];
            }
        }

       
        while (m--) {
            char op;
            long long l, r;
            cin >> op >> l >> r;

           
            if (max_value >= l && max_value <= r) {
                if (op == '+') {
                    ++max_value;  
                } else if (op == '-') {
                    --max_value;  
                }
            }

            cout << max_value << " ";  
        }
        cout << endl;  
    }

    return 0;
}

