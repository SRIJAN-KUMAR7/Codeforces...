#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 0) {
        cout << n << endl;
    } else {
        string s = to_string(n);
        string o1 = s.substr(0, s.size() - 1);
        string o2 = s.substr(0, s.size() - 2) + s[s.size() - 1];
        int num1 = stoi(o1);
        int num2 = stoi(o2);
        cout << max({n, num1, num2}) << endl;
    }
    return 0;
}
