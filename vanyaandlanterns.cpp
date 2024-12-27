#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double l;
    cin >> n >> l;
    vector<double> lamp(n);
    for (int i = 0; i < n; ++i) {
        cin >> lamp[i];
    }
    sort(lamp.begin(),lamp.end());
    double maxi = 0;
    for (int i = 1; i < n; ++i) {
        maxi = max(maxi, lamp[i] - lamp[i-1]);
    }
    double s= lamp[0];  
    double e = l - lamp[n-1];   
    double d = max({maxi/2,s,e});
    cout << fixed << setprecision(9) << d << endl;

    return 0;
}
