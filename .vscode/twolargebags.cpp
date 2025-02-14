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
sort(arr.begin(),arr.end());
vector<int> f(n + 1, 0);
    for (int i = 0; i < n; i++) {
    f[arr[i]]++;}
    int oc=0;
    bool pos=true;
    for(int i=0;i<=n;i++){
        if(f[i]%2==1){
            oc++;
            if(i==n || f[i+1]==0){
                pos=false;
                break;
            }
        f[i]--; 
        f[i+1]++;
        }

    }
   if(pos){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

}
  return 0;
}