#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
long long n;
cin>>n;
vector<long long>arr(n-1);
long long s=0;
for(int i=0;i<n-1;i++){
  cin>>arr[i];
  s=s+arr[i];
}
long long ts=n*(n+1)/2;
cout<<ts-s<<endl;
  return 0;
}