// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int t;
// cin >> t;
// while (t--){
//     int n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//         vector<int>a({v[n-1]});
//         for(int i=0;i<n;i++){
//             if(v[i]>v[i+1]){
//                 a.push_back(v[i]%10);
//                 a.push_back(v[i]/10);

//             }
//             else{
//                 a.push_back(v[i]);
//             }
//         }
//          if(is_sorted(a.rbegin(),a.rend())){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }

//     }
   
//  return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> a;
        a.push_back(v[n - 1]);

        for (int i = n - 2; i >= 0; i--) {
            if (v[i] > v[i + 1]) {
                a.push_back(v[i] % 10);
                a.push_back(v[i] / 10);
            } else {
                a.push_back(v[i]);
            }
        }

        if (is_sorted(a.rbegin(), a.rend())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
