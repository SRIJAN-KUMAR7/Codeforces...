#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        int op = 1; 
        int x = 1; 
        while (x<n) {
            x=x*2 +2; 
            op++; 
        }
        cout <<op<<endl; 
    }

    return 0;
}
