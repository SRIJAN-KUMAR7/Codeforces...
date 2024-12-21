#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;

        long long ra = min(n, a - x);
        long long na = a - ra;
        long long rr = n - ra;
        long long p = max(b - rr, y);
        long long product1 = na * p;
        
     
        long long rb = min(n, b - y);
        long long nb = b - rb;
        rr = n - rb;
        long long na2 = max(a - rr, x);
        long long product2 = na2 * nb;

        cout << min(product1, product2) << endl;
    }
    
    return 0;
}
