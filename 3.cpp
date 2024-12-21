#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long tc;
    cin >> tc;
    while (tc-- > 0) {
        long long size;
        cin >> size;
        vector<long long> numbers(size);
        for (long long i = 0; i < size; i++) {
            cin >> numbers[i];
        }
        if (size == 2 || size == 1) {
            cout << "-1" << endl;
            continue;
        } else {
            sort(numbers.begin(), numbers.end());
            long long ts = 0;
            for (long long i = 0; i < size; i++) {
                ts += numbers[i];
            }
            long long mid = size / 2;
            long long cv = numbers[mid] * 2 * size;
            if (cv - ts < 0) {
                cout << "0" << endl;
            } else {
                long long res = cv - ts + 1;
                cout << res << endl;
            }
        }
    }
    return 0;
}
