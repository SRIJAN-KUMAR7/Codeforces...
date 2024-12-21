#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> result(n);
        
        for (int i = n-1; i>=0; i--) {
            string row;
            cin >> row;
            for (int j = 0; j < 4;j++) {
                if (row[j] == '#') {
                    result[i] = j + 1;  
                    break;
                }
            }
        }

        for (int col : result) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
