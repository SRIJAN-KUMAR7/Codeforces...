#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> f;
        
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            f[x]++;
        }

        vector<int> v1, v2;
        
        for (auto& e : f) {
            if (e.second >= 2) v1.push_back(e.first);
            if (e.second % 2 == 1) v2.push_back(e.first);
        }

        int c = v1.size();
        
        if (c >= 2) {
            cout << v1[0] << " " << v1[0] << " " << v1[1] << " " << v1[1] << endl;
        } else if (c == 1) {
            if (v2.size() >= 2) {
                sort(v2.begin(), v2.end());
                int d = abs(v2[0] - v2[1]);
                if (2 * v1[0] > d) {
                    cout << v1[0] << " " << v1[0] << " " << v2[0] << " " << v2[1] << endl;
                } else {
                    cout << -1 << endl;
                }
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
