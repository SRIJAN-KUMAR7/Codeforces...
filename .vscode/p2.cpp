// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n; // n > 4
//         cin >> n;
//         vector<int> a(n);
//         int cnt0 = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] == 0) {
//                 cnt0++;
//             }
//         }
//         int op = 0;
//         vector<pair<int, int>> ops;
//         int l = -1;
//         int r = -1;

//         if (cnt0 % 2 == 0) {
//             for (int i = 0; i<n; i++) {
//                 if (a[i] == 0 && a[i+1]== 0) {
//                     l = i+1;
//                     r = i+2;
//                     op++;
//                     ops.push_back({l,r});
//                 }
//             }
//         } else {
//             for (int i = 0; i<n-1; i++) {
//                 if (a[i] == 0 && a[i+1]!= 0) {
//                     l = i+1;
//                     r = i+1;
//                     op++;
//                     ops.push_back({l,r});
//                 }
//             }
//         }

//         cout << op << "\n";
//         for (auto &p : ops) {
//             cout << p.first << " " << p.second << "\n";
//         }
//     }
//     return 0;
// }


//my previous approach failed at cases where there can be 1 between even count of zeroes 
//hard code pattern matching with position of zeroes 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int zero_count=count(v.begin(),v.end(),0);
    if (zero_count==0) {
        cout<<1<<"\n";
        cout<<1<<" "<<n<<"\n";
        return;
    }

    if (v[0] == 0 && v[n-1] != 0) {
        cout << 2 << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << 1 << " " << 2 << "\n";
        return;
    }

    if (v[n-1] == 0 && v[0] != 0) {
        cout<<2<<"\n";
        cout<<2<<" " <<n<< "\n";
        cout<<1<<" " <<2<< "\n";
        return;
    }

    if (v[0] != 0 && v[n-1] != 0) {
        cout<<2<<"\n";
        cout<<2<<" " << n-1 << "\n";
        cout<<1<<" " <<3<<"\n";
        return;
    }

    if (v[0] == 0 && v[n - 1] == 0) {
        cout << 3 << "\n";
        cout << 1 << " " << 2 << "\n";
        cout << 2 << " " << n - 1 << "\n";
        cout << 1 << " " << 2 << "\n";
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
