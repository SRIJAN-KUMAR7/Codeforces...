#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        
        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());


        long long total_cost = 0;
        for (int i = 0; i < n; i++) {
            total_cost += (a[i] + b[i]) - min(min_a, min_b);
        }

        cout << total_cost << endl;
    }
}

int main() {
    solve();
    return 0;
}
