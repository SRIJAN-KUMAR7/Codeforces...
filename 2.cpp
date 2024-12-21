#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long n,k;
    cin>>n>>k;
    long long s=max(1ll,n-k+1);
    long long e=n;
    long long oc=0;
    if(s%2==1){
        oc=(e-s)/2+1;
    }
    else{
        oc=(e-s+1)/2;
    }
    if(oc%2==0){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

}
  return 0;
}