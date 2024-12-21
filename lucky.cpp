#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str; 
        
        if (str.length() != 6) {
            cout << "NO" << endl;
            continue;
        }

        int x = (str[0] - '0') + (str[1] - '0') + (str[2] - '0');
        int y = (str[3] - '0') + (str[4] - '0') + (str[5] - '0');
        
        if (x == y) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
