#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, last;
        cin >> n;
        vector<int> a(n - 1);  
        
        
        for (int i = 0; i < n - 1; i++) {
            cin >> a[i];
        }
        
        
        cin >> last;
        
       
        int max_it = 0;
        for (int j = 0; j < n - 1; j++) {
            max_it = max(max_it, a[j]);
        }
        
        
        cout << max_it + last << endl;
    }
    
    return 0;
}
