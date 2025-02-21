#include <bits/stdc++.h>
using namespace std;
int lower_bound(const std::vector<int>& arr, int x) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left; // This returns the index of the first element >= x
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;//taking inputs 
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
        int ind = lower_bound(psum.begin(), psum.end(), x) - psum.begin();//use lower bound yoyo
        cout<<ind+1<<endl;
    }
   

  return 0;
}