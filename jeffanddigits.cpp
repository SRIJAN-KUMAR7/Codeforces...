#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int c5=0;
int c0=0;
for(int i=0;i<n;i++){
    if(v[i]==5){
        c5++;
}
    else{
        c0++;
}
}
if(c0==0){
    cout<<-1<<endl;
    return 0;
}


  return 0;
}