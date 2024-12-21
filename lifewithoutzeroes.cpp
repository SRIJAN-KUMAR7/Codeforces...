// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int a;
// int b;
// cin>>a>>b;
// int c=a+b;
// string str1=to_string(a);
// string str2=to_string(b);
// char toremove='0';
// str1.erase(std::remove(str1.begin(), str1.end(),toremove), str1.end());
// str2.erase(std::remove(str2.begin(), str2.end(),toremove), str2.end());
// int a1 = std::stoi(str1);
// int a2 = std::stoi(str2);
// if(a1+a2==c){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    
    int c = a + b;
    string str1 = to_string(a);
    string str2 = to_string(b);

    char toremove = '0';
    str1.erase(remove(str1.begin(), str1.end(), toremove), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), toremove), str2.end());
    int a1 = stoi(str1);
    int a2 = stoi(str2);
    string str3 = to_string(c);
    str3.erase(remove(str3.begin(), str3.end(), toremove), str3.end());
    int c1 = stoi(str3);
    if (a1 + a2 == c1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
