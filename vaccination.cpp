#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k, d, w;
        cin >> n >> k >> d >> w;  
        vector<int> a(n);  
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int packs = 0;  
        int doses_left = 0;  
        int p = 0; 

        for (int i = 0; i < n; ++i) {
            int c = a[i];

            
            if (doses_left < 1 || c > p + w + d) {
                packs++;  
                p = c;  
                doses_left = k; 
            }

            doses_left--;  
        }

        cout << packs << endl;  
    }

    return 0;
}
