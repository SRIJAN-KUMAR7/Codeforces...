#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n, k; 
        cin >>n>>k;
        string s; 
        cin>>s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s<rev) {
            cout <<"YES"<<endl;
            continue;
        }
        if(k==0) {
            cout<<"NO"<<endl;
            continue;
        }
        //k not zero
        sort(s.begin(), s.end());
        rev = s;
        reverse(rev.begin(), rev.end());

        if (s < rev) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
