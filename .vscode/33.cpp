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
    vector<int>arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    long long ps=0;
    long long ss=0;
    long long ms=0;
    for (int i=0;i<n;i++) {
        ps = ps+max(0, arr[i]);
    }
    for (int i=n-1;i>=0;i--) {
        ss += max(0, -arr[i]); 
        ms = max(ms,ps+ss);
        ps -= max(0, arr[i]);
    }

    cout << ms << endl;

}
  return 0;
}