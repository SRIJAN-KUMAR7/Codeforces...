#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n;
    cin>>n;
    if(n%2020<=n/2020){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
  return 0;
}