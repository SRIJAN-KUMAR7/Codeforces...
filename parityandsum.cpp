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
    vector<int>a(n);
    int oc=0;
    int ec=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    cout<<min(oc,ec)<<endl;
}
  return 0;
}