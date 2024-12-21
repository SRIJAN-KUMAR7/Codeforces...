// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int t;
// cin >> t;
// while (t--){
//     string s;
//     cin>>s;
//     int a=0;
//     int b=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='0'){
//             a++;
//         }
//         else{
//             b++;
//         }
//        }
//         if(min(a,b)&1){
//             cout<<"DA"<<endl;

//         }
//         else{
//             cout<<"NET"<<endl;
//         }


// }
//   return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int pair_count = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')) {
                ++pair_count;

                ++i;
            }
        }
        
        
        if (pair_count % 2 == 1) {
            cout << "DA" << endl;
        } else {
            cout << "NET" << endl;
        }
    }
    return 0;
}
