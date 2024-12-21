#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> freq(n + 1, 0); 
        

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int maxFrequency = *max_element(freq.begin(), freq.end());
        int minOperations = n - maxFrequency;
        cout << minOperations << endl;
    }

    return 0;
}
