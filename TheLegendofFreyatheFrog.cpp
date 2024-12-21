#include <bits/stdc++.h>
using namespace std;

long long ceil_div(long long x, long long y) {
    return (x + y - 1) / y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        
        long long jump_x = ceil_div(x, k);
        long long jump_y = ceil_div(y, k);
        long long total_moves = jump_x + jump_y;

        if (jump_x == jump_y) {
            cout << total_moves << endl;
        } else {
        
            cout << max(jump_x, jump_y) + (max(jump_x, jump_y) - 1) << endl;
        }
    }

    return 0;
}
