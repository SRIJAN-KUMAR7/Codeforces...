#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long l,r;
    cin>>l>>r;
    if(l==1 && r==1){
        cout<<1<<endl;
    }
    else{
        cout<<r-l<<endl;
    }
}
  return 0;
}