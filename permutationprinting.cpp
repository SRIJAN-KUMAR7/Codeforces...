#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n & 1) {
            vector<int> v(n);
            int odd = n;
            for (int i = 0; i < n; i += 2) {
                v[i] = odd;
                odd -= 2;
            }
            
            int even = 2;
            for (int i = 1; i < n; i += 2) {
                v[i] = even;
                even += 2;
            }

            for (int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        } else { 
            vector<int> v(n);
            int even = n; 
            for (int i = 0; i < n; i += 2) {
                v[i] = even;
                even -= 2;
            }

            int odd = 1;
            for (int i = 1; i < n; i += 2) {
                v[i] = odd;
                odd += 2;
            }

            for (int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
