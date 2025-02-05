#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<long long>ar(4);
    ar.push_back(a);
    ar.push_back(b);
    ar.push_back(c);
    ar.push_back(d);
    long long cnt=0;
    for(int i=0;i<ar.size();i++){
        if(ar[0]<ar[i])cnt++;
    }
    cout<<cnt<<endl;
}
  return 0;
}