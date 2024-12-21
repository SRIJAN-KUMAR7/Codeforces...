#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int m=0;
        if(n&1){
            vector<int> freq(26,0);
            for(int i=0;i<n;i++){
                freq[s[i]-'a']++;

            }
            int m=*min_element(freq.begin(),freq.end());

        }


        vector<int> even(26, 0);
        vector<int> odd(26, 0);
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                even[s[i] - 'a']++;
            } else {
                odd[s[i] - 'a']++;
            }
        }

        int e= *max_element(even.begin(), even.end());
        int o = *max_element(odd.begin(), odd.end());

        int c = (n/2-e) + (n/2-o)-m;
    
        cout <<c<< endl;
    }
    
    return 0;
    }