#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long  n,l,r;
    cin>>n>>l>>r;
    l--;
    r--;
    vector<long long>x(n);
    for(int i=0;i<n;i++) cin>>x[i];
    vector<long long>a,b;
for(int i=l;i<n;i++){
  a.push_back(x[i]);
}
for(int j=0;j<=r;j++){
  b.push_back(x[j]);
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
  long long s1=accumulate(a.begin(),a.begin()+(int)(r-l+1),0LL);
  long long s2=accumulate(b.begin(),b.begin()+(int)(r-l+1),0LL);

  cout<<min(s1,s2)<<endl;
    
    
}
  return 0;
}//subsequence with a double smilie or double sad faces 