#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    double s = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
    }

    double fract = s / n;
    cout << fixed << setprecision(12) << fract << endl;

    return 0;
}
