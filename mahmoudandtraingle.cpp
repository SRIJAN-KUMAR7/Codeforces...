#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];}
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++){
    if(a[i] + a[i + 1] > a[i + 2]) {
          cout << "YES" << endl;
          return 0;
      }
  }
cout<<"NO"<<endl;
  return 0;
}