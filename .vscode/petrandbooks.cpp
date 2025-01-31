#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
 int n;
cin>>n;  
    int b[7];
    for (int i=0;i<7;i++) {
        cin>>b[i];
    }
while (n > 0) {
        for (int i=0;i<7;i++) { 
            n-=b[i];  
            if (n<= 0) {
                cout<<i+1<<endl;  
                return 0;
            }
        }
    }
  return 0;
}