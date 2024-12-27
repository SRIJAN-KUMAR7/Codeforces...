#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    // Process the first digit
    if (x[0] > '4' && x[0] != '9') {
        x[0] = '9' - x[0] + '0';
    }

    // Process the remaining digits
    for (size_t i = 1; i < x.size(); ++i) {
        if (x[i] > '4') {
            x[i] = '9' - x[i] + '0';
        }
    }

    cout << x << endl;
    return 0;
}
