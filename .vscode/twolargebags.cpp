#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> f(n+1);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            f[a]++;            
        }
        bool pos=true;
        for(int i=1;i<=n;i++){
            if(f[i]==1){
                pos=false;
                break;
            }
            f[i+1]+=max(0,f[i]-2);
        }
        cout<<(pos?"YES\n":"NO\n");
    }//this problem was little on the ttougher siide 
    
}