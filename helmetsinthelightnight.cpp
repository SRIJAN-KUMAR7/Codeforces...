#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<long long, long long> p1, pair<long long, long long> p2) {
    return p1.first < p2.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, p;
        cin >> n >> p;

        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<long long, long long>> v;
        for (int i = 0; i < n; i++) {
            v.emplace_back(b[i], a[i]); 
        }

        sort(v.begin(), v.end(), comparator);

        long long minCost = p;
        long long s = 1;

        for (int i = 0; i < n; i++) {
            if (v[i].first >= p) {
                break;
            }

            long long x = min(n - s, v[i].second);
            minCost += x * v[i].first;
            s += x;
        }

        minCost += (n - s) * p;

        cout << minCost << endl;
    }

    return 0;
}
