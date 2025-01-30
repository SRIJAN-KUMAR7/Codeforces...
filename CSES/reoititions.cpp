#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
string str;
cin>>str;
int mcnt=INT_MIN;
int cnt=0;
for(int i=1;i<=str.length();i++){
   
    if(str[i]==str[i-1]){
      cnt++;
    }
    else{
        cnt=0;
    }
    mcnt=max(cnt,mcnt);
}
cout<<mcnt+1<<endl;
  return 0;
}