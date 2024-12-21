// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n; 
//     cin >> n;
//     vector<int> prices(n);
//     for (int i = 0; i < n; i++) {
//         cin >> prices[i]; 
//     }
//     sort(prices.begin(), prices.end());
//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++) {
//         long long m; 
//         cin >> m;
//         int count = 0;
//         for (int price : prices) {
//             if (price <= m) {
//                 count++;
//             } else {
//                 break; 
//             }
//         }
//         cout << count << endl; 
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        long long m;
        cin >> m;
        int count = upper_bound(prices.begin(), prices.end(), m) - prices.begin();
        cout << count << endl;
    }

    return 0;
}
