#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    for(int i=1;i<9;i++){
        if((str[1])!='0'+i){//new thing
              cout<<str[0]<<i<<endl;
        }
      
    }
    for(int j=97;j<105;j++){
        if(str[0]!=j){
            cout<<char(j)<<str[1]<<endl;
        }
    }
}
  return 0;
}