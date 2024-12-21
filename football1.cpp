#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin >> n;
string str[n];
for(int i=0;i<n;i++){
    cin>>str[i];
}
sort(str,str+n);
cout<<str[n/2]<<endl;

  return 0;
}