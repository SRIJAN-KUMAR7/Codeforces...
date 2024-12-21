#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int k;
cin >> k;
vector<int>v(12);
for(int i=0;i<12;i++){
    cin>>v[i];
}
 if(k==0) {
        cout<<0<<endl;
        return 0;
    }
sort(v.begin(), v.end(), greater<int>());
int tg=0;
int m=0;
for(int i=0;i<12;i++){
    tg=tg+v[i];
    m++;
    if(tg>=k){
        cout<<m<<endl;
        return 0;
    }
}
  cout<<-1<<endl;
  return 0;
}