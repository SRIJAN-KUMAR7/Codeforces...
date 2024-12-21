#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int a,b,c;
    cin>>a>>b>>c;
    int x,y;
    x=std::abs(a-b);
    y=0;
    int count=0;
    while(x>y){
        x=x-c;
        y=y+c;
        count++;
    }
    cout<<count<<endl;
}
  return 0;
}