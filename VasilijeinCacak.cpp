#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n,k,x;
    cin>>n>>k>>x;
    long long smin=(k*(k+1))/2;
    long long smax=(k*(2*n-k+1))/2;
    if(x>=smin && x<=smax){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
  return 0;
}