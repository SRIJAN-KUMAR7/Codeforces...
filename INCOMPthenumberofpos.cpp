#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,a,b;
cin>>n>>a>>b;
int minpos=a+1;
int maxpos=n-b;
int res=maxpos-minpos+1;
cout<<res<<endl;
  return 0;
}