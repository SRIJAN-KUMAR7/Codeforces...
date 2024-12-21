#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m;
    cin >> n >> m;
    if (m % n != 0) {
        cout << -1 << endl;
        return 0;
    } 
    long long k = m / n;
    int count2 = 0, count3 = 0;
    while (k % 2 == 0) {
        k /= 2;
        count2++;
    }
    while (k % 3 == 0) {
        k /= 3;
        count3++;
    }  
    if (k == 1) {
        cout << count2 + count3 << endl;
    } else {
        cout << -1 << endl;
    } 
    return 0;
}
