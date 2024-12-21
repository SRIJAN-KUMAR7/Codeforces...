#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; 
    vector<int> coins(n);
    int ts = 0;
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        ts += coins[i];
    }
    sort(coins.begin(), coins.end(), greater<int>());
    int my_sum = 0;
    int twin_sum = ts;
    int num_coins = 0;
    for (int i = 0; i < n; ++i) {
        my_sum += coins[i];
        twin_sum -= coins[i];
        num_coins++;
        if (my_sum > twin_sum) {
            break;
        }
    }
    cout << num_coins << endl;
    return 0;
}
