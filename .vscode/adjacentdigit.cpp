#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int x,y;
    cin>>x>>y;
    if((x+1)==y){
        cout<<"Yes"<<endl;
    }
    else if(((x-y+1)%9==0)&&x>y){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
  return 0;
}