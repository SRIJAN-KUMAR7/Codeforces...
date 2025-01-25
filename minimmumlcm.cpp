// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int t;
// cin >> t;
// while (t--){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<n/2<<" "<<n/2<<endl;
//     }
//     else if(n%3==0){
//         int a=n/3;
//         int b=n-a;
//         cout<<a<<" "<<b<<endl;
//     }
//      else if(n%5==0){
//         int a=n/5;
//         int b=n-a;
//         cout<<a<<" "<<b<<endl;
//     }
//      else if(n%7==0){
//         int a=n/7;
//         int b=n-a;
//         cout<<a<<" "<<b<<endl;
//     }
//     else{
//         cout<<1<<" "<<n-1<<endl;
//     }
// }
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

long long smallestDivisor(long long n) {
    for (long long i=2;i*i<=n;i++) {
        if (n%i==0) return i; 
    }
    return n; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            cout << n/2 <<" "<< n/2 << endl;
        } else {
            long long d = smallestDivisor(n);
            cout << (n/d) << " " << (n -(n/d)) << endl;
        }
    }

    return 0;
}
