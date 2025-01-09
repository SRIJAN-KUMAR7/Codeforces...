#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
long long n;
cin>>n;
vector<long long>arr(n-1);
for(int i=0;i<n-1;i++){
  cin>>arr[i];
}
int xor1=0;
int xor2=0;
for(int i=0;i<n-1;i++){
    xor2=xor2^arr[i];
    xor1=xor1^(i+1);
}
xor1=xor1^n;
long long num=xor1^xor2;
cout<<num<<endl;
return 0;}