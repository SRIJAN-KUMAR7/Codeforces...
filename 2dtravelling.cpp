#include <bits/stdc++.h>
using namespace std;

long long dis(pair<int,int>p1, pair<int,int>p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        
        a--; b--;
        vector<pair<int, int>> city(n);

        for (int i = 0; i < n; i++) {
            cin >> city[i].first >> city[i].second;
        }

        long long direct = dis(city[a], city[b]);

        if (a < k && b < k) {
            cout << 0 << endl;
            continue;
        }

        long long mina = direct;
        long long minb = direct;

        for (int i = 0; i < k; i++) {
            mina = min(mina, dis(city[a], city[i]));
        }

        for (int i = 0; i < k; i++) {
            minb = min(minb, dis(city[b], city[i]));
        }

        long long result = min(direct, mina + minb);
        cout << result << endl;
    }

    return 0;
}
