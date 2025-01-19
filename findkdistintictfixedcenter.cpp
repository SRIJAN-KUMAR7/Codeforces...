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
    int x=xc;
    int y=yc;
    for(int i=1;i<=k;i++){
     if(k%2!=0){
           if(i!=k){
        if(i%2==0 ){
            x=x-i;
            y=y-i;
        cout<<x<<" "<<y<<endl;
        }
        else if(i%2!=0){
        x=x+i;
        y=y+i;
        cout<<x<<" "<<y<<endl;
        }}
        else if(i==k){
        cout<<xc<<" "<<yc<<endl;
        }
     }
     else{
        if(i%2==0 ){
            x=x-i;
            y=y-i;
        cout<<x<<" "<<y<<endl;
        }
        else if(i%2!=0){
        x=x+i;
        y=y+i;
        cout<<x<<" "<<y<<endl;
        }
     }
        
    }
}
  return 0;
}