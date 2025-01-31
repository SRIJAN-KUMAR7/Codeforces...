#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
long long cnt=0;
vector<int>arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}
for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
      cnt+=arr[i-1]-arr[i];
      arr[i]=arr[i-1];
    }
}
cout<<cnt<<endl;
  return 0;
}