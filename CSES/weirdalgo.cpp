#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
cout<<n<<" ";
while(n>1){
  if(n%2==1){
    n=3*n+1;
    cout<<n<<" ";
  }
  else{
    n=n/2;
    cout<<n<<" ";
  }
}

  return 0;
}