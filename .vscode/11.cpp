#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int g = 1;
        for (int i = 1; i < n; i++) {
            if (str[i] != str[i - 1]) {
                g++;
            }
        }

        int res = (str[0] == '0') ? g - 1 : g;
        cout << res << "\n";
    }

    return 0;
}
