#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s=s+arr[i];
    }
    if(s==0){
        cout<<"EASY"<<endl;

    }
    else{
        cout<<"HARD"<<endl;
    }
}