#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        
        int sum = 0, negCount = 0, minabs = 100;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                sum += abs(grid[i][j]);
                if (grid[i][j] < 0) {
                    negCount++;
                }
                minabs = min(minabs, abs(grid[i][j]));
            }
        }
        
        if (negCount & 1) {
            sum -= 2 * minabs;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
