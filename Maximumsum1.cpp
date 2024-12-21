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
    vector<long long>v(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];

    }
    long long temp=sum;
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
      long long newsum=sum-v[i*2]-v[i*2+1];
      temp=max(newsum,temp);
      sum=sum-v[n-i-1];
    }
    cout<<temp<<endl;
}
  return 0;
}