#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
   long long n, x; 
   cin >> n >> x;
    long long ans = 0;
    for(long long a = 1; a <= n; a++) {
        for(long long b = 1; (a * b) <= n && (a + b <= x); b++) {
              long long c1 = (n- (a * b)) / (a + b);
              long long c2 = x - (a + b);
              long long mn = (min(c1, c2));
              if(mn > 0)
              ans += mn;
        }
    }
    cout << ans << endl;
}
    

  return 0;
}