#include <iostream>
#include <vector>
using namespace std;

long long factorial_mod(int n, int divv) {
    long long x = 1;
    for (int i = 2; i <= n; ++i) {
        x = (x * i) % divv;
        if (x == 0) break;
    }
    return x;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
    int n, d;
    cin >> n >> d;
    vector<int> div = {1, 3, 5, 7, 9};
    vector<int> x;
        
        for (int dig : div) {
            if (dig == 1) {
                x.push_back(1);
            } else if (dig == 3) {
                if (n >= 3) {
                    x.push_back(3);
                } else if ((d * n) % 3 == 0) {
                    x.push_back(3);
                }
            } else if (dig == 5) {
                if (d == 5) {
                    x.push_back(5);
                }
            } else if (dig == 7) {
                if (n >= 7) {
                    x.push_back(7);
                } else {
                    long long fact_mod_7 = factorial_mod(n, 7);
                    if (fact_mod_7 == 0) {
                        x.push_back(7);
                    }
                }
            } else if (dig == 9) {
                if (n >= 6) {
                    x.push_back(9);
                } else if ((d * n) % 9 == 0) {
                    x.push_back(9);
                }
            }
        }
        for (int i = 0; i < x.size(); i++) {
            cout << x[i] << (i == x.size() - 1 ? "" : " ");
        }
    cout << endl;
    }
}
int main() {
    solve();
    return 0;
}
