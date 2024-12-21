#include <iostream>
#include <map>
using namespace std;
#define int long long

int32_t main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n, d, k;
        cin >> n >> d >> k;

        map<int, int> startCount, endCount;
        while (k--) {
            int left, right;
            cin >> left >> right;
            startCount[left]++;
            endCount[right]++;
        }

        int cc = 0, mc = 0, minc = 0;
        int maxIndex = 1, minIndex = 1;

        for (int i = 1; i <= d; i++) {
            cc += startCount[i];
        }
        
        mc = minc = cc;

        for (int i = 2; i <= n - d + 1; i++) {
            cc += startCount[i + d - 1];
            cc -= endCount[i - 1];

            if (cc > mc) {
                mc = cc;
                maxIndex = i;
            }
            if (cc < minc) {
                minc = cc;
                minIndex = i;
            }
        }

        cout << maxIndex << " " << minIndex << endl;
    }
}
