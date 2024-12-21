#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        bool isValid = true;
        bool letterFound = false;

        for (int i = 1; i < n; i++) {
            if (isdigit(str[i])) {
                if (letterFound || str[i] < str[i - 1]) {
                    isValid = false;
                    break;
                }
            } else if (islower(str[i])) {
                if (str[i] < str[i - 1]) {
                    isValid = false;
                    break;
                }
                letterFound = true;
            }
        }

        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
