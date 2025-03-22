// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int t;
// cin >> t;
// while (t--){
//     long long  n;
//     cin>>n;
//     long long cnt=0;
//     if(n==1){
//         cout<<2<<endl;
//         continue;
//     }
//     if(n==0){
//         cout<<1<<endl;
//         continue;
//     }
//     long long rem=n%15;
//     long long a=(n/15+1)*3;
//     long long d=n-rem;
       
//         if(rem==0){
//           cout<<a-2<<endl;
//           continue;
//         }
//         if(n==d*rem+1||n==d*rem+2||n==d*rem+2){
//           cout<<a-1<<endl;
//           continue;
//         }
//         if(rem==1||rem==2){
//             cout<<a<<endl;
//             continue;
//         } 
//         else{
//         cout<<a<<endl;
//         }    
    
// }
//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    long long n;
    cin>>n;
    long long rem = (n / 15);
    long long a = rem*15;
    long long ans = (rem + 1) * 3;
    if(n==a) {
        ans=ans-2;
    }
    else if (n==a+1){
        ans=ans-1;
    }
    cout <<ans<<endl;
}
  return 0;
}