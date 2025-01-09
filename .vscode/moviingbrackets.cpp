#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        string s;
        cin >> s;
        int bal = 0; 
        int m = 0;  

        for (char c : s) {
            if (c == '(') {
                bal++;
            } else {
                bal--; 
                if (bal < 0) {
                    m++;    
                    bal = 0;
                }
            }
        }
















































































        cout<<m<<endl; 
    }

    return 0;
}
