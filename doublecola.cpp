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
    vector<string>names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long cnt=1;
    while(5*cnt<n){
        n=n-5*cnt;
        cnt=cnt*2;
    }
    cout<<names[(n-1)/cnt]<<endl;
}
  return 0;
}