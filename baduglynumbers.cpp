#include <bits/stdc++.h>
using namespace std;


int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1) {
        cout << "-1"<<endl;
    } else if (n == 2) {
        cout <<"57\n";  
    } else {
    cout << "2";  
    for (int i = 1; i < n; i++) {
        // cout << (3 + (i-1) % 7);
         cout << ((i%2)?3:9);
        }
        cout<<endl;
    }

    }
    return 0;
}
