#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>a(n);
    for (int i =0;i<n;i++)cin>>a[i];
    long long ts=0;
   int r=n-1;
   int l=0;
   int c=0;
while(l<r){
    long long s=accumulate(a.begin(),a.end());
    if(s>=x){
        c++;
        r--;
    }
    s=s-a[r]
}
cout<<c*k<<endl;
}
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>a(n);
    for (int i =0;i<n;i++)cin>>a[i];
    long long ts=0;
   int r=0;
   int l=0;
   int c=0;
   //sliding window 
    for(int l=0;l<n*k;l++){
        while(r<n*k && ts<x){
            ts=ts+a[r%n];
            r++;
        }
        if(ts>=x){
          c=c+(n*k-r+1);
        }
        ts=ts-a[l%n];
    }
    cout<<c<<endl;
}
  return 0;
}
