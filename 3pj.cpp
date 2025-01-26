#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << arr[0] << endl;
            continue;
        }
int sum = accumulate(arr.begin(), arr.end(), 0LL);

int k = 1;      
while (k<=n - 1) {  
vector<int> p = arr;
            
int c = 0;
while (c<k) { 
if (p.size() == 1) break;             
if (p[0] > p.back()) {
    reverse(p.begin(), p.end());
}
vector<int> diff;
int i = 0;
while (i < p.size() - 1) { 
    diff.push_back(p[i + 1] - p[i]);
    i++;
}
p = diff;
c++;
}

    int csum = accumulate(p.begin(), p.end(), 0LL); 
    if (csum > sum) {
    sum = csum;
     }
     k++;
 }
 cout << sum << endl;
}
 return 0;
}
