#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int n) {
    int s= 0;
    while (n > 0) {
        s+= n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int k;
    cin >> k; 
    int count = 0; 
    int num = 18;  
    
    while (count < k) {
        num++;  
        if (sum_of_digits(num) == 10) {
            count++;  
        }
    }
    cout << num << endl;
    
    return 0;
}
