#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        vector<int> q(k);

    for (int i = 0; i < m; ++i) cin >> a[i];
    for (int i = 0; i < k; ++i) cin >> q[i];

    string res;
    if (k == n) {
      res = string(m, '1');
    } 
else if (k == n - 1) {
        int mq = -1;
            
for (int i = 1, j = 0; i <= n; ++i) {
if (j < k && q[j] == i) {
j++; 
    } else {
         mq = i; 
     break;
}
}
for (int i = 0; i < m; ++i) {
res += (a[i] == mq ? '1' : '0');
}} 
else {
res = string(m, '0'); 
}
cout << res << endl;
    }
    return 0;
}
