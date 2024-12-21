#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int k,n,w;
cin>>k>>n>>w;
int tc=k*(w*(w+1))/2;
int bc=tc-n;
if(bc>0){
    cout<<bc<<endl;
}
else{
    cout<<0<<endl;
}
  return 0;
}