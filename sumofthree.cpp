// #include <bits/stdc++.h>
// using namespace std;
// int main()
// { int t;
//     cin >> t;
//     while (t--) {

//     }
  
//   return 0;
// }
#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n < 6) {
            cout << "NO" << endl;
            continue;
        }
        
        if (n % 3 == 0) {
            cout << "YES" << endl;
            cout << 1 << " " << 2 << " " << n - 3 << endl;
        } else if (n % 3 == 1) {
            cout << "YES" << endl;
            cout << 1 << " " << 2 << " " << n - 3 << endl;
        } else {
            cout << "YES" << endl;
            cout << 1 << " " << 4 << " " << n - 5 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
