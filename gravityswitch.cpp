#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
vector<int> v(n);
for(int t=0;t<n;t++){
    cin>>v[t];
}
sort(v.begin(),v.end());
for(int t=0;t<n;t++){
    cout<<v[t]<<" ";
}
cout<<endl;

  return 0;
}