#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    ll X;
    cin >> X;
    ll aa = 1, bb = X; 
    for (ll d = 1;d*d<=X; d++) { 
        if (X%d== 0) {  
            ll a = d, b = X/d;
            if (lcm(a, b) == X && max(a, b)<max(aa, bb)) {
                aa =a;
                bb =b;
            }
        }
    }
    cout<< aa <<" "<< bb <<endl;
    return 0;
}
