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
    if(n%2==0){
        cout<<n/2<<n/2<<endl;
    }
    else if(n%3==0){
        int a=n/3;
        int b=n-a;
        cout<<a<<b<<endl;
    }
    else{
        cout<<1<<n-1<<endl;
    }
}
  return 0;
}