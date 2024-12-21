#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string st="";
        string target ="meow";
        for(char &c : str) {
        c = tolower(c);
        }

       st += str[0]; 
        for (int i = 1; i < n; i++) {
            if (str[i] != str[i - 1]) {
                st += str[i];
            }
        }

        if(st==target){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
  return 0;//use return loop ke bahar
}