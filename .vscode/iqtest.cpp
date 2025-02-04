#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    int oc=0, ec =0, oi=-1, ei=-1;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if (arr[i]%2==0) {
            ec++;
            ei=i+1;  
    }else {
        oc++;
        oi = i + 1;  
        }
    }

    if (oc==1) {
        cout<<oi<< endl;
    } else {
        cout<<ei<< endl;
    }

    return 0;
}
