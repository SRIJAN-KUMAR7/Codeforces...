// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int t;
// cin>>t;
// while (t--){
//     int n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     bool pos=true;
//     for(int i=0;i<k;i++){
//         if(s[i]!=s[n-i-1]){
//             pos=false;
//             break;
//         }
//     }
//     if(2*k>=n){
//         pos=false;
//     }
//    if(pos){
//     cout<<"YES"<<endl;
//    }
//    else{
//     cout<<"NO"<<endl;
//    }
// }
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> cnt(26, 0); 
        string s;
        cin >> s;
        
        for (char c : s) {
            cnt[c - 'a']++;
        }
      
        int odd = 0;
        for (int x : cnt) {
            if (x % 2 != 0) {
                odd++; 
            }
        }

        if (odd <= k + 1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}
