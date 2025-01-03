#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t; 
    while (t--) {
        int n;
        long long x;
        cin>>n>>x;

        vector<int> a(n);
        int mh = 0; 
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if (a[i] >mh) {
                mh = a[i];
            }
        }
        int low = 1, high = mh + x + 1, bestH = 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalWater = 0;
            for (int i = 0; i < n; ++i) {
                if (mid > a[i]) {
                    totalWater += (mid - a[i]);
                }
                if (totalWater > x) { 
                    break;
                }
            }
            if (totalWater <= x) {
                bestH = mid;  
                low = mid + 1; 
            } else {
                high = mid - 1; 
            }
        }
        cout << bestH << endl;
    }
    return 0;
}
