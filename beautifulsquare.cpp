#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int si = sqrt(n);
        if (si * si != n) {
            cout << "No" << endl;
            continue;
        }

        bool isBeautiful = true;

        for (int i = 0; i < si; ++i) {
            if (s[i] != '1' || s[n - si + i] != '1') {
                isBeautiful = false;
                break;
            }
        }

        if (isBeautiful) {
            for (int i = 1; i < si - 1; i++) {
                if (s[i * si] != '1' || s[(i + 1) * si - 1] != '1') {
                    isBeautiful = false;
                    break;
                }
                for (int j = 1; j < si - 1; j++) {
                    if (s[i * si + j] != '0') {
                        isBeautiful = false;
                        break;
                    }
                }
                if (!isBeautiful) break;
            }
        }

        if (isBeautiful) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
