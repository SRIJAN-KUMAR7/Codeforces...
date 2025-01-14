#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    if(n==1 & a[0]%2=1){
        cout<<"Yes"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]&1==1){
                a[i]=1;
            }
            else{
                a[i]=0;
            }
        }
        int c1=0;
        int c0=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                c1++;
            }
            else{
                c0++;
            }
        }
      if(c1>x){
        cout<<"Yes"<<endl;
        return 0;
      }
      else{
        
      }


    }
}
  return 0;
}