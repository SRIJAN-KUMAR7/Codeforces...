#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long l, r;
        cin >> l >> r;
        
        long long le = 0;
        long long sum = 0;
        long long inc = 1;
        
        while (l + sum + inc <= r) {
            sum+= inc;
            inc++;
            le++;
        }

        cout << le + 1 << endl; 
    }

    return 0;
}
