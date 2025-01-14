#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //converting array tom zero and 1
for(int i=0;i<n;i++){
     if(a[i]&1==1){
      a[i]=1;
         }
        else{
      a[i]=0;
         }
     }
       
       //counting part
        int c1=0;
        int c0=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                c1++;
            }
            else{
                c0++;
            }
        }

//sufficient 1
if(c1>=x){
    if(x%2!=0){
        cout<<"Yes"<<endl;
    }
    else{
        if(c0>=1){
             cout<<"Yes"<<endl;
        }
    }
    
}
//insufficient 1
else if(c1<x){
    if(c1%2!=0){
        cout<<"Yes"<<endl;
    }
    else{
        if(c1>=1){
             cout<<"Yes"<<endl;
        }
    }


}

    
}
  return 0;
}