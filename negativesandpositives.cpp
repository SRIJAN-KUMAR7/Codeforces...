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
    vector <long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        }
    int nigcount=0;
    int abssum=0;
    for(int i=0;i<n;i++) {
      if(v[i]<0){
            nigcount++;
            v[i]=-v[i];
        }
        abssum=abssum+v[i];
    }
    sort(v.begin(),v.end());
    if(nigcount & 1){
        abssum=abssum-2*v[0];
       
    }
    cout<<abssum<<endl;
    
    }
return 0;
} 
