#include<bits/stdc++.h> 
using namespace std;

void solve() {
    int x[3];
    cin >> x[0] >> x[1] >> x[2];
    

    sort(x, x + 3);
    

    int result = (x[2] - x[1]) + (x[1] - x[0]);
    
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
