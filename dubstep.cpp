// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string r;
//     cin>> r;
//     string o = "";
//     for (int i = 0; i < r.size(); ) {
//         if (i+2<r.size()&&r[i]=='W'&&r[i+1]=='U'&&r[i+2] == 'B') {
//             i += 3;
//             if (!o.empty()&&o.back()!= ' '){
//                 o+=' ';
//             }
//         } else{
//             o += r[i];
//             i++;
//         }
//     }
//     if(!o.empty()&&o.back()==' '){
//         o.pop_back();
//     }
//     cout<<o<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string result = regex_replace(s, regex("WUB"), " ");
    result = regex_replace(result, regex("^ +| +$"), "");
    result = regex_replace(result, regex(" +"), " ");
    cout << result << endl;
    return 0;
}
