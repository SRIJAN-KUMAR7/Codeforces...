#include <bits/stdc++.h>
using namespace std;

int compute_mex(const vector<long long>& b) {
    set<long long>s;
    for (long long x:b) {
        if (x>=0)s.insert(x);
    }
    int mex= 0;
    for (long long val:s) {
        if (val==mex)mex++;
        else if (val>mex) break;
    }
    return mex;
}

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
    int mini=arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<mini){
           mini=arr[i];
        }
    }
    
    int b_mex=0;

    for(int i=0;i<n;i++){
        long long x=-arr[i];
        vector<long long>b(n);
        for(int j=0;j<n;j++){
            b[j]=arr[j]+x;
        }
        int mex=compute_mex(b);
        b_mex=max(b_mex,mex);
    }
    cout<<b_mex<endl;
}
  return 0;
}