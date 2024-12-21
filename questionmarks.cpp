#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count_A=0;
    int count_B=0;
    int count_C=0;
    int count_D=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='A'){
            count_A++;
        }
         if(str[i]=='B'){
            count_B++;
        }
         if(str[i]=='C'){
            count_C++;
        }
         if(str[i]=='D'){
            count_D++;
        }
      
        
        
    }
int maxOperations=min(n,count_A)+min(n,count_B)+min(n,count_C)+min(n,count_D);
        cout<<maxOperations<<endl;

    

}
  return 0;
}