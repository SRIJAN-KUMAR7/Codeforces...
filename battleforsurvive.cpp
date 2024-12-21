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
    cin >> n;
    long long sum=0;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(i<n-2){
                sum+=v[i];
            }
        }
        cout<<v[n-1]-(v[n-2]-sum)<<endl;  

    
}
  return 0;
}