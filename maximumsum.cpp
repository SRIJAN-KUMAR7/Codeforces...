#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(nullptr)

const ll MOD = 1e9 + 7;

void solve() {
    ll n, k;
    cin >> n >> k;

    ll max_sum = 0, current_sum = 0, total_sum = 0;
    ll max_subarray_sum = LLONG_MIN;

    // Calculate the maximum subarray sum (Kadane's algorithm) and total sum
    for (ll i = 0; i < n; ++i) {
        ll x;
        cin >> x;

        total_sum += x;
        current_sum = max(x, current_sum + x);
        max_subarray_sum = max(max_subarray_sum, current_sum);
    }

    // Result after k doublings of the maximum subarray sum
    ll result = max_subarray_sum;
    while (k--) {
        result = (result * 2) % MOD;
    }

    // Add the total sum and adjust the result
    result = (result + (total_sum - max_subarray_sum)) % MOD;
    if (result < 0) result += MOD;

    cout << result << '\n';
}

int main() {
    speed;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
