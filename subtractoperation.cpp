#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n,k;
    cin>>n>>k;
    unordered_set<int>s;
    bool found =false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==k){
            found=true;
        }
        s.insert(x);
    }

    if (found){
        cout<<"YES"<<endl;
        return;
    }

    for (int x:s) {
        if (s.count(x-k)) { 
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
  return 0;
}