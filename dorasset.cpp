#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
   int l, r;
        cin >> l >> r;

        vector<int> evens;
        vector<int> odds;

        
        for (int i = l; i <= r; i++) {
            if (i % 2 == 0 && i != 2) evens.push_back(i);
            else if (i % 2 == 1) odds.push_back(i);
        }
        int c=min(evens.size(),(odds.size())/2);

       
        }
        cout<<c<<endl;

   
    
}



  return 0;
}