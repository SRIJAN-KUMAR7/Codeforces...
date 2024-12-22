// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int t;
// cin >> t;
// while(t--) {
// int n,x,y;
// cin>>n>>x>>y;
// vector<int> vec(n);
// for (int i = 0; i < n; i++) {
// cin >> vec[i];
// }
// long long sum = accumulate(vec.begin(), vec.end(), 0LL);
// long long L= sum-y;
// long long R= sum-x;

// sort(vec.begin(), vec.end());

// int cnt = 0;
// for (int i = 0;i<n - 1;i++) {
// long long low = L - vec[i];
// long long high = R - vec[i]; 

// int lside = lower_bound(vec.begin() + i + 1, vec.end(), low) - vec.begin();
// int rside = upper_bound(vec.begin() + i + 1, vec.end(), high) - vec.begin();
// cnt += (rside - lside);
// }

// cout << cnt << endl;
// }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Calculate total sum S
        long long S = accumulate(a.begin(), a.end(), 0LL);
        // Calculate the bounds L and R
        long long L = S - y;
        long long R = S - x;

        // Sort the array for binary search
        sort(a.begin(), a.end());

        int count = 0;

        // Use binary search to count valid pairs for each a[i]
        for (int i = 0; i < n - 1; i++) {
            // We are looking for a[j] such that:
            // L - a[i] <= a[j] <= R - a[i]
            long long low = L - a[i];
            long long high = R - a[i];

            // Binary search for the range [low, high]
            int left = lower_bound(a.begin() + i + 1, a.end(), low) - a.begin();
            int right = upper_bound(a.begin() + i + 1, a.end(), high) - a.begin();

            // The number of valid pairs (i, j) with j > i
            count += (right - left);
        }

        cout << count << endl;
    }

    return 0;
}