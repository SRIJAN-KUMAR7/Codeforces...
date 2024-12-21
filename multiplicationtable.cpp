#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int j = 1;
    if (x > n) {
        if (x % n == 0) {
            j = x / n;
        } else {
            j = x / n + 1;
        }
    }

    int c = 0;
    for (int i = j; i <= n; i++) {
        if (x % i == 0) {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
