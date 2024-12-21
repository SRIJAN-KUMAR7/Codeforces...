#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minimizeRange(vector<int>& c, int a, int b) {

    sort(c.begin(), c.end());
    
    int min_val = c[0];
    int max_val = c[c.size() - 1];
    
  
    if (a == b) {
        return max_val - min_val;
    }
    
    
    int option1 = max_val - (min_val + a); 
    int option2 = max_val - (min_val + b); 
    int option3 = (max_val + a) - min_val; 
    int option4 = (max_val + b) - min_val; 
    
    
    return min({option1, option2, option3, option4});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
        cout << minimizeRange(c, a, b) << '\n';
    }
    
    return 0;
}
