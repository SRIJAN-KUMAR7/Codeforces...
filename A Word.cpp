#include<iostream>
using namespace std;
 
 
    void Word(string str){
        int u=0;
        int l=0;
        int n= str.length();
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                u++;
            }
            else{
                l++;
            }
        }
        if(u>l){
        for(int i = 0; i < n; i++) {
            str[i] = toupper(str[i]);
        }
        }
        else{
            for(int i=0;i<n;i++){
                str[i]=tolower(str[i]);
            }
        }
        cout<<str<<endl;
 
    }
int main(){
        string str;
        cin>>str;
        Word(str);
    
 
 
 
    return 0;
}
