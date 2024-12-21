#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;

vector<pair<int,int>>l(n);
 for (int i = 0; i < n; i++) {
        int p,q;
        cin >>p>>q;
         l[i] = {p,q};
    }

    sort(l.begin(), l.end());
    for (int i = 1; i < n; i++) {

        if(l[i].second<l[i - 1].second) {
            cout <<"Happy Alex"<< endl;

            return 0; 
        }
    }
    cout<<"Poor Alex"<<endl;
  return 0;
}