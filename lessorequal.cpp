#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
int mini=a[0];
int maxi=a[n-1];

if (k==0) {
        if (a[0]>1) {
            cout << a[0]-1<< endl;
        } else {
            cout<<-1<<endl;
        }
    } else{
        int x = a[k-1];
        int count = 0;
        for (int i=0;i<n;i++) {
            if (a[i]<=x) {
                count++;
            }
        }
        if (count==k) {
            cout<<x<<endl;
        } else {
            cout<<-1<<endl;
        }
    }

  return 0;
}