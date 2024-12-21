#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int power[n];
    for(int idx=0;idx<n;idx++){
        cin>>power[idx];
        }
    int count=0;
    for(int i=0;i<n;i++){
        if(power[i]>power[i+1]){
            count++;
            
        }
    }



}