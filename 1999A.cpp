#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp=n;
        int p=temp%10;
        int q=temp/10;
        cout<<p+q<<endl;
    }
  return 0;
}