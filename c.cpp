#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        long long x = 1;
        while (n>3) {
            x *= 2; 
            n/= 4;       
        }
        cout<<x<<endl;
    }
    return 0;
}
