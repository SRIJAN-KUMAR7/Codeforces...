#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b >= a) {
            cout << b << endl;
        } else {
            if (d >= c) {
                cout << -1 << endl;
            } else {
                long long remaining_sleep = a - b;
                long long cycles = (remaining_sleep + (c - d) - 1) / (c - d);
                long long total_time = b + cycles * c;
                cout << total_time << endl;
            }
        }
    }
    
    return 0;
}
