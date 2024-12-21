#include <bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> seats(n);
        
        vector<bool> occu(n + 2, false); 
        
        bool valid = true;
        
      
        for (int i = 0; i < n; i++) {
            cin >> seats[i];
        }
        
        for (int i = 0; i < n;i++) {
            int seat = seats[i];
            if (i == 0) {
                occu[seat] = true;
            } else {
                if (occu[seat - 1] || occu[seat + 1]) {
                    occu[seat] = true;
                } else {
                    valid = false;
                    break;
                }
            }
        }
        
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
