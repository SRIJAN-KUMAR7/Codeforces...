#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> b(n);
        long long product = 1;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            product *= b[i];
        }
        
        // 2023 = 7 * 17 * 17
        long long target = 2023;
        long long required = target / product;  // This is what needs to be multiplied with b to get 2023
        
        if (product > target || target % product != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            vector<int> factors;
            while (required > 1 && factors.size() < k) {
                if (required % 17 == 0) {
                    factors.push_back(17);
                    required /= 17;
                } else if (required % 7 == 0) {
                    factors.push_back(7);
                    required /= 7;
                }
                else if (required % 1 == 0) {
                    factors.push_back(1);
                    required /= 1;}
                     else {
                    break;  // If it's no longer divisible by 7 or 17, break the loop
                }
            }
            // Print the factors, which represent the removed elements
            for (int factor : factors) {
                cout << factor << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
