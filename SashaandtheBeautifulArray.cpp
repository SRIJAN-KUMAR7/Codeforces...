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
     vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    sort(arr.begin(), arr.end());
    for(int j=1;j<n;j++){
        s=s+(arr[j]-arr[j-1]);
    }
    cout<<s<<endl;

}
  return 0;
}