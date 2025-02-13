#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int countX = 0;
    for (char c : s) {
        if (c == 'X') countX++;
    }

    int target = n / 2;
    int changes = abs(countX - target);

    for (int i = 0; i < n && countX != target; i++) {
        if (countX > target && s[i] == 'X') {
            s[i] = 'x';
            countX--;
        } else if (countX < target && s[i] == 'x') {
            s[i] = 'X';
            countX++;
        }
    }

    cout << changes << endl;
    cout << s << endl;
    return 0;
}