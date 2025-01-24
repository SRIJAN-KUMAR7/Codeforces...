// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n,b;
//     cin>>n>>b;
//     vector<int> a(n);
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         sum += a[i];
//     }
//     if ((sum + b) % n != 0) {
//       cout << "-1\n";
//     } else {
//       double xm = (sum + b) * 1.0 / n;
//       for (int i = 0; i < n; i++) {
//           cout << fixed << setprecision(6) << (xm-a[i]) << "\n";
//        }
//     }
//    return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, b;
    cin >> n >> b;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i<n; i++) {
        cin>>a[i];
        sum += a[i];
    }
    double xm = (sum + b) * 1.0 / n;
     if (X < *max_element(a.begin(), a.end())) {
        cout <<"-1"<<endl;
        return 0;
    }
    for (int i = 0; i < n;i++) {
        cout<<fixed<<setprecision(6)<<(xm - a[i]) << "\n";
    }
    return 0;
}
