#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
   int n, m;
    cin >> n >> m;
    int min_moves = (n + 1) / 2; 
    int k = min_moves;
    while (k <= n) {
        if (k % m == 0) {
            cout << k << endl;
            return 0;
        }
        k++;
    }
    cout << -1 << endl;
    return 0;
}
