#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n;
        cin >> n;
        vector<int> arr(n), even, odd;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }

        vector<int> re = even;
        re.insert(re.end(), odd.begin(), odd.end());

        int p = 0, s = 0;
        for (int num : re) {
            s += num;
            if (s % 2 == 0) {
                p++;
                while (s % 2 == 0) s /= 2;
            }
        }

        cout << p << endl;

}
  return 0;
}
