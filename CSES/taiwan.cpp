#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long w,b;
    cin>>w>>b;
    long long tp=w+b;
    long long k=0;
    while((k*(k+1))/2<=tp){
        k++;
    }
    while(k/2>min(w,b)){
        k--;
    }
    cout<<k<<endl;
}
  return 0;
}