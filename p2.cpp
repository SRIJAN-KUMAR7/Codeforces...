#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin>>n>>a>>b>>c;
 long long cs = a + b + c;
 long long fc = n/cs;
 long long total_distance = fc * cs;
 long long days = fc * 3;
        
if (total_distance < n) {
           if (total_distance + a >= n) days += 1;
           else if (total_distance + a + b >= n) days += 2;
           else days += 3;
        }
     cout << days << endl;
    }
  return 0;
}
