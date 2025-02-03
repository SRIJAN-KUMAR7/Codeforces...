#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        
        for (int &x : arr) cin >> x;

        bool p = false; 

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { 
                if (arr[i] - arr[j] == k || arr[j] - arr[i] == k) {
                    cout << "YES\n";
                    p = true;
                    break;
                }
            }
            if(p) break; 
        }
        if(!p) cout << "NO\n";
    }
    
    return 0;
}
