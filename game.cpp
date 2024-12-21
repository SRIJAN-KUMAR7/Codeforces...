#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n;
    cin >> n;  
    vector<int> a(n);
        
for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }
    bool T=true;
    
    if(T){
    int maxVal = a[0];
    int maxI = 0;
    for (int i = 1; i <a.size(); i++) {
         if (a[i] > maxVal) {
                maxVal = a[i];
                maxI = i;
            }
                }
        a[0] = maxVal;  
        a.erase(a.begin() + maxI);  
        
    }
     else{
        int minVal = a[0];
        int minI = 0;
        for (int i = 1; i < a.size(); i++) {
                    if (a[i] < minVal) {
                        minVal = a[i];
                        minI = i;
                    }
                }
        a[0] = minVal;  
        a.erase(a.begin() + minI);

    }
    T=!T;
    cout<<a[0]<<endl;
    }
    return 0;

    
    
     }
   
    

