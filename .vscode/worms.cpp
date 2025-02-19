#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>q(m);
    for(int i=0;i<m;i++){
        cin>>q[i];
    }
    vector<int>psum(n);
    psum[0]=a[0];
    for(int i=1;i<n;i++){
        psum[i]=psum[i-1]+a[i];
    }
    for(int j=0;j<m;j++){
        int x=q[j];
        int ind = lower_bound(psum.begin(), psum.end(), x) - psum.begin();
        cout<<ind+1<<endl;
    }
   

  return 0;
}