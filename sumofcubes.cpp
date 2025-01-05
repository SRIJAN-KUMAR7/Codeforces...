#include <bits/stdc++.h>
using namespace std;
bool isPerfectCube(long long n) {
    if (n < 0) return false; 
    long long rt= round(cbrt(n));
    return rt*rt*rt== n;
}
bool cananswer(long long N) {
    for (long long a=0; a*a*a <= N; ++a) {
        long long ac =a*a*a;
        long long bc = N - ac;
        if (isPerfectCube(bc)) {
            return true; 
        }
    }
    return false; 
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long x;
    cin>>x;
    if(cananswer(x)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
  return 0;
}