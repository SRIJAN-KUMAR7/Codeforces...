#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int p = 1;
        if(n%2==0){
            cout<<-1<<endl;
        }

        else{
              for (int i = 0; i < n; i += 2) {
            a[i] = p++;
        }

        
        for (int i = n - 2; i >= 1; i -= 2) {
            a[i] = p++;
        }
            for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;

        }
      
   
    
    }
    return 0;
}
