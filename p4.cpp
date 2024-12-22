#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while(t--) {
int n,x,y;
cin>>n>>x>>y;
vector<int> vec(n);
for (int i = 0; i < n; i++) {
cin >> vec[i];
}
long long sum = accumulate(vec.begin(), vec.end(), 0LL);
long long L= sum-y;
long long R= sum-x;

sort(vec.begin(), vec.end());

int cnt = 0;
for (int i = 0;i<n - 1;i++) {
long long low = L - vec[i];
long long high = R - vec[i]; 

int lside = lower_bound(vec.begin() + i + 1, vec.end(), low) - vec.begin();
int rside = upper_bound(vec.begin() + i + 1, vec.end(), high) - vec.begin();
cnt += (rside - lside);
}

cout << cnt << endl;
}
return 0;
}
