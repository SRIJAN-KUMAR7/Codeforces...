// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a;
//         cin >> a;
//         string str=to_string(a);
//         if(a<100){
//             cout<<"NO"<<endl;
//         }
//         if(str[0]==1 && str[1]==0){
//            str.erase(0,2);
//            if(str[0]==0){
//             cout<<"NO"<<endl;
//            }
//            else if(stoi(str)>=2){
//             cout<<"YES"<<endl;
//            }   
//         }
//         else {
//             cout << "NO" << endl;
//         }
//     }
//     }
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a;
        
        if (a < 100) {
            cout << "NO" << endl;
        } else {
           
            string s = to_string(a);
            
            
            if (s.substr(0, 2) == "10") {
                
                string subStr = s.substr(2);
                int b = stoi(subStr);
                
                if (b >= 2 && s[2] != '0') {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}
