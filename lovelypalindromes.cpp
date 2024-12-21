#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n; 
    string p= n;
    for (int i = n.length() - 1; i >= 0;i--) {
        p+=n[i]; 
    }
    cout <<p<< endl;
    return 0;
}
