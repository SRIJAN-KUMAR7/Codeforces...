// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // // ios::sync_with_stdio(false);
// // // cin.tie(nullptr);
// // // int t;
// // // cin >> t;
// // // while (t--){
// // // long long  n;
// // // cin>>n;
// // // long long r=n%9;
// // // cout<<45*(n/9)+(r*(r+1))/2<<endl;
// // // }
// // //   return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // long long sd(long long n) {
// //   long long s = 0;
// //   for (long long i=1;i<=n;i*=10) {
// //    s+=(n/(i*10))*45*i+((n%(i*10))*(n%(i*10)+1))/2;
// //   }
// //    return s;
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         long long n;
// //         cin>>n;
// //         cout<<sd(n)<<"\n";
// //     }
// //     return 0;
// // }
// // //still wrong

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int t;
// cin >> t;
// while (t--){
//       long long  n;
//         cin>>n;
//         long long  sum = 0;
//         for (int i = 1; i <= n;i++) {
//           int num = i ;
//             while (num > 0) {
//                 sum += num % 10;  
//                 num /= 10;    
//             }
//         }
//         cout <<sum<< endl;
    
// }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

            while (num > 0) {
                sum += num % 10;  
                num /= 10;    
            }

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
  int n;
  cin>>n;

}
  return 0;
}