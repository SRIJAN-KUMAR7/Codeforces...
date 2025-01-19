#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int xc,yc,k;
    cin>>xc>>yc>>k;
    int x=k*xc;
    int y=k*yc;
    for(int i=0;i<k;i++){
        if(i%2==0){
            x=x-i;
            y=y-i;
        cout<<x<<" "<<y<<endl;
        }
        else{
        x=x+i;
        y=y+i;
        cout<<x<<" "<<y<<endl;
        }
       
    }
}
  return 0;
}