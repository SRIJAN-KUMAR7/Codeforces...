// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--){
//         long long x,y,a;
//         cin>>x>>y>>a;
//         double dp = a+0.5;
//         double sum =0;
//         int tn=1;
//         while (true) {
//             if (tn % 2 != 0)sum+=x;  
//             else sum += y;              
//             if (sum>dp) {
//                 if (tn % 2!= 0) cout << "YES\n"; 
//                 else cout << "NO\n";              
//                 break;
//             }
//             tn++;
//         }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x,y,a;
        cin >>x>>y>>a;
        double dp=a+0.5;
        long long low =1, high =2e9, res=-1;
        while (low<= high) {
            long long mid =(low+high)/ 2;
            long long ot=(mid + 1) / 2;
            long long et=mid/2;
            double res=ot*x+et*y;
            if (res>dp) {
                a=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        if (a%2!=0) cout<<"NO\n"; 
        else cout<<"YES\n";              
    }
    return 0;
}
