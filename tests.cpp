#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int maxFrequency = 0;
        for (auto &entry : freq) {
            maxFrequency = max(maxFrequency, entry.second);
        }

        cout << maxFrequency << endl;
    }
    return 0;
}
