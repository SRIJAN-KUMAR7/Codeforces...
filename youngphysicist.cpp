#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
 int xc =0,yc =0,zc =0;
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        xc += x;
        yc += y;
        zc += z;
    }

    if (xc == 0 && yc == 0 && zc == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
