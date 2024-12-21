#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long a,b,n,s;
    cin>>a>>b>>n>>s;

    long long n_coins=min(a,s/n);
    long long rem_b=s-(n_coins)*n;

    if(rem_b<=b){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

}
  return 0;
}