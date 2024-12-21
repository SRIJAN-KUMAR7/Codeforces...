// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// string s;
// cin>>s;
// int n=s.length();
// for(int i=0;i<n;i++){
//     if(islower(s[0])){
//         s[0]=toupper(s[0]);
//     }
//     else{
//         s[i]=tolower(s[i]);
//     }
// }
// cout<<s<<endl;
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.length();
    bool au = true, flu = true;
    for (int i = 0; i < n; i++) {
        if (islower(s[i])) {
            au = false;
        }
    }
    if (islower(s[0])) {
        for (int i = 1; i < n; i++) {
            if (islower(s[i])) {
                flu = false;
                break;
            }
        }
    } else {
        flu = false;
    }
    if (au || flu) {
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;
    return 0;
}
