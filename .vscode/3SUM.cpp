// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     for (int i = 0; i < n; i++) {
//         if (i > 0 && nums[i] == nums[i - 1]) continue;
//         int j = i + 1;
//         int k = n - 1;
//         while (j < k) {
//             int sum = nums[i] + nums[j] + nums[k];
//             string sumStr = to_string(sum); // Convert sum to string
//             if (sumStr.back() == '3') { // Check last digit
//                 vector<int> temp = {nums[i], nums[j], nums[k]};
//                 ans.push_back(temp);
//                 j++;
//                 k--;
//                 while (j < k && nums[j] == nums[j - 1]) j++;
//                 while (j < k && nums[k] == nums[k + 1]) k--;
//             } else if (sum < 0) {
//                 j++;
//             } else {
//                 k--;
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         vector<vector<int>> ans = threeSum(arr);
//         cout << (ans.empty() ? "NO" : "YES") << "\n";
//     }
//     return 0;
// }


//added long long to avoid overflow in line number 77  

#include <bits/stdc++.h>
using namespace std;

void khelahobe() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> f;
    unordered_map<int, int> freq;
    
    for (int x : nums) {
        int d = x % 10;
        if (freq[d] < 3) {
            f.push_back(x);
            freq[d]++;
        }
    }
    int m = f.size();
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                if ((f[i] + f[j] + f[k]) % 10 == 3) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        khelahobe();
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

void khelahobe() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> f;
    unordered_map<int, int> freq;
    
    for (int x : nums) {
        int d = x % 10;
        if (freq[d] < 3) {
            f.push_back(x);
            freq[d]++;
        }
    }

    int m = f.size();
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                if (((long long)f[i] + f[j] + f[k]) % 10 == 3) { // Fix overflow
                    cout << "YES\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        khelahobe();
    }

    return 0;
}

corrected the overflow