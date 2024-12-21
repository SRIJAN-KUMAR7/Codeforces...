// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
// //         cin >> s;
// //         bool allSame = true;
// //         for (int i = 1; i < s.size(); ++i) {
// //             if (s[i] != s[0]) {
// //                 allSame = false;
// //                 break;
// //             }
// //         }
// //         if (allSame) {
// //             cout << "NO\n";
// //         } else {
// //             string r = s;
// //             sort(r.begin(), r.end());
// //             cout << "YES\n" << r << "\n";
// //         }
// //     }
    
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         string s;
//         cin >> s;
       
//         bool allSame = true;
//         for (int i = 1; i < s.size();i++) {
//             if (s[i] != s[0]) {
//                 allSame = false;
//                 break;
//             }
//         }
        
//         if (allSame) {
//             cout << "NO\n";
//         } else {
//             string r = s;
//             sort(r.begin(), r.end());
//             for(int i=1;i<s.size();i++){
 
// 	         if(s[i]!=s[0]){
//                 swap(s[i],s[0]);
//                 cout << "YES\n" << r << "\n";
//         }
//     }
    
//     return 0;
// }
// }}
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int flag = 0;
        int x, y;
        for(int i = 1; i < len; i++)
        {
            if(s[i] != s[i - 1])
            {
                flag = 1;
                x = i;
                y = i - 1;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
            swap(s[x], s[y]);
            cout << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
 
    }
    return 0;
}