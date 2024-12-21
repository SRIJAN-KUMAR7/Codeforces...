#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int t = a*1 + b*2;
        
    
        if (t % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int h = t/2;
            
    
            if (h % 2 == 0 || (h % 2 == 1 && a > 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
