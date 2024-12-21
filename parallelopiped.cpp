#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2, a3;
    cin>>a1>>a2>>a3;
    // long long product = a1 * a2 * a3;
    long long product = 1LL * a1 * a2 * a3;

    long long abc = sqrt(product);
    int a = abc / a2;
    int b = abc / a3;
    int c = abc / a1;
    int sum_of_edges = 4 * (a + b + c);
    cout << sum_of_edges << endl;
    return 0;
}
