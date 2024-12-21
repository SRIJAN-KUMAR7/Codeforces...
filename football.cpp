#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
string str;
cin>>str;
char p=str[0];
int c=1;
for(int i=1;i<=str.length();i++){
    if(str[i]==p){
        c++;
        if(c>=7){
            cout<<"YES"<<endl;
        }
    }
    else{
        p=str[i];
        c=1;
    }
}
cout<<"NO"<<endl;

  return 0;
}