#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b; 
        int d = abs(a - b);        
        if (d%2 ==1) {
            cout << "NO" << endl; 
        } else {
            cout << "YES" << endl; 
        }
    }
    return 0;
}
