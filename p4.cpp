#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;  
        vector<long long> v(n);
        long long S = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            S += v[i];
        }
long long L = S - y;
        long long R = S - x;
        vector<long long> sorted_a = v;
        sort(sorted_a.begin(), sorted_a.end());
        long long cnt = 0;
for (int i = 0; i < n - 1; i++) {
    long long left_bound = L - sorted_a[i];
     long long right_bound = R - sorted_a[i];
    int t = lower_bound(sorted_a.begin() + i + 1, sorted_a.end(), left_bound) - sorted_a.begin();
    int J = upper_bound(sorted_a.begin() + i + 1, sorted_a.end(), right_bound) - sorted_a.begin();
    cnt +=(J-t);
    }   
cout << cnt << endl;
 } 
return 0;
}
