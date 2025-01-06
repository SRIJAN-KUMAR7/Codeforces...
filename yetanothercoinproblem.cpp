#include <iostream>
using namespace std;

int main() {
    // Coin values are fixed
    int coins[] = {15, 10, 6, 3, 1}; // Start with the largest coin
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int count = 0;

        for (int i = 0; i < 5; i++) {
            count += n / coins[i]; // Use as many of the current coin as possible
            n %= coins[i];        // Reduce n by the amount used
            if (n == 0) break;    // If n becomes 0, we are done
        }

        cout << count << endl; // Output the result for this test case
    }

    return 0;
}
