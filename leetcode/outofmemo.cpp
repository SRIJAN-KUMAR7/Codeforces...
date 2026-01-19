#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n,m,h;
    cin>>n>>m>>h;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>narr=arr;
    for(int i=0;i<m;i++){
          int b;
          long long c;
          cin>>b>>c;
          b=b-1;
          
          if(narr[b]>h-c){
            narr=arr;
          }
          else{
            narr[b]+=c;
          }

    }
    for(int i=0;i<n;i++){
        cout<<narr[i];
        if(i<n-1){
            cout<<" ";
        }
        
    }
    cout<<endl;

}
  return 0;
}