#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
long long ans=1;//default
for(int i=0;i<n;i++){
    if(arr[i]==ans){
        ans++;
    }
    else{
        break;//for mindef 
    }
}
cout<<ans<<endl;
  return 0;
}