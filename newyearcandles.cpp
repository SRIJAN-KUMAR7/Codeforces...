#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b; 
    int t = 0;
    int rc = a;
    int bc = 0;
    while (rc > 0) {
        t+=rc;
        bc+=rc;
        rc= bc/b;
        bc%=b;
    }
    cout<<t<< endl;
    return 0;
}
