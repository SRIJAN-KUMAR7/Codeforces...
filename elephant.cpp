#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int min_steps=0;
    int temp=x;
   
    min_steps+=temp/5;
    if(temp%5!=0){
        min_steps+=1;
    }
    cout<<min_steps<<endl;



  return 0;
}