#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
map<pair<int, int>, int> mpp;
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        mpp[{h, m}]++;
    }

int maxx=0;
for (auto it : mpp) {
        if (it.second > maxx) {
            maxx = it.second;
        }
    }
cout<<maxx<<endl;
  return 0;
}