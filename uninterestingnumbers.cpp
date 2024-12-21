#include <bits/stdc++.h>
using namespace std;
bool isPossible(string n) {
    int sum = 0;
    for (char c :n) {
        sum += c-'0';
    }
    if (sum % 9 == 0) return true; 
    for (char c : n) {
        int digit = c - '0';
        if (digit == 0 || digit == 1 || digit == 2 || digit == 3) {
            int newSum = sum - digit + (digit * digit);
            if (newSum % 9 == 0) 
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << (isPossible(n) ? "YES" : "NO") << endl;
    }
    return 0;
}
