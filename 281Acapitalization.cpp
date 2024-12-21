#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string temp=str;
    temp.erase(0,1);
    cout<<char(toupper(str[0]))<<temp<<endl;


}