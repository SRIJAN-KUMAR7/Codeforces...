#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    if (x[0] > '4' && x[0] != '9') {
        x[0] = '9' - x[0] + '0';
    }
    for (size_t i = 1; i < x.size(); ++i) {
        if (x[i] > '4') {
            x[i] = '9' - x[i] + '0';
        }
    }
    cout <<x<< "/n";
    return 0;
}
