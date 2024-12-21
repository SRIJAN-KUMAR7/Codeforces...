#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'o' || ch == 'u' || ch == 'i' || ch == 'e';
}

int main() {
    string s;
    cin >> s;

    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (!isVowel(s[i]) && s[i] != 'n') {
            if (i == n - 1 || !isVowel(s[i + 1])) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
