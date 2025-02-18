#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        int tc = n * m;
        vector<int> cc(tc + 1, 1);  
        vector<int> grid(tc);
        for (int i = 0; i < tc; i++) {
            cin >> grid[i];
        }
        vector<bool> cp(tc + 1, false);
    
        for (int i = 0; i < tc; i++) {
            cp[grid[i]] = true;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int index = i * m + j;
                int color = grid[index];
                
                if (j + 1 < m && grid[index + 1] == color) {
                    cc[color] = 2;
                }
                
                if (i + 1 < n && grid[(i + 1) * m + j] == color) {
                    cc[color] = 2;
                }
            }
        }
    
        long long tot = 0;
        int maxx = 0;
        
        for (int c = 1; c <= tc; c++) {
            if (cp[c]) {
                tot += cc[c];
                maxx = max(maxx, cc[c]);
            }
        }
    
        cout << tot - maxx << endl;
    }
    
    return 0;
}
