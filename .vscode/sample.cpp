#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
int arr[n];
int cnt=1;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//logic
for(int i=1;i<n;i++){
   if(arr[i-1]!=arr[i]){
      cnt++;
   }
}
cout<<cnt<<endl;

  return 0;
}