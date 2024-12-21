#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n, k;
        cin >> n >> k; 
        long long minSum = k * k;
        if (n<minSum||(n%2!=k%2)) {
            cout << "NO" << endl; 
        } else {
            cout << "YES" <<endl; 
        }
    }

    return 0;
}
