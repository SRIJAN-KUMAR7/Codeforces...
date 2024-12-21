// #include <iostream>
// #include <cmath>

// using namespace std;

// bool isPerfectSquare(long long x) {
//     long long root = sqrt(x);
//     return root * root == x;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         long long totalSquares = 0;
//         for (int i = 0; i < n; ++i) {
//             long long ai;
//             cin >> ai;
//             totalSquares += ai;
//         }
        
//         if (isPerfectSquare(totalSquares)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{ int num=8
;
int cnt=__builtin_popcount(num);
cout<<cnt<<endl;
  return 0;
}
