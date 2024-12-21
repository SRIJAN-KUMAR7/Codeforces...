#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the smallest prime factor of a number
int find_smallest_prime_factor(int n) {
    if (n <= 1) {
        return -1; // Indicate invalid input
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return i;
        }
    }
    return n; // If no prime factor is found, the number itself is prime
}

// Function to find the permutation with maximum distinct GCDs
vector<int> find_permutation(int n) {
    vector<int> gcd_counts(n + 1, 0); // Initialize gcd counts to 0
    vector<vector<int>> groups(n + 1); // Create empty groups
    vector<int> permutation;

    for (int i = 1; i <= n; ++i) {
        int p = find_smallest_prime_factor(i);
        if (p != -1) { // Check for valid prime factor
            gcd_counts[p]++;
            groups[p].push_back(i);
        }
    }

    // Sort groups based on gcd counts in descending order
    sort(groups.begin(), groups.end(), [](const vector<int>& a, const vector<int>& b) {
        return gcd_counts[a[0]] > gcd_counts[b[0]];
    });

    // Combine groups into the permutation
    for (const vector<int>& group : groups) {
        permutation.insert(permutation.end(), group.begin(), group.end());
    }

    return permutation;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> permutation = find_permutation(n);
        for (int i : permutation) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}