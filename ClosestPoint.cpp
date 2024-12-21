// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> points(n);
//         for (int i = 0; i < n; i++) {
//             cin >> points[i];
//         }
//         sort(points.begin(), points.end());

//         bool possible = false;

//         if (n == 2) {

//             if (points[1] - points[0] > 2) {
//                 possible = false;
//             }
//         } else {
          
//             for (int i = 0; i < n - 1; i++) {
//                 for (int j = i + 1; j < n; j++) {
//                     if (points[j] - points[i] <= 2) {
//                         possible = true;
//                         break;
//                     }
//                 }
//                 if (possible) break;
//             }
//         }

//         if (possible) {
//             cout << "NO" << endl;
//         } else {
//             cout << "YES" << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
         vector<int> points(n);
      for (int i = 0; i < n; i++) {
           cin >> points[i];
           }
        if(n>2){
            cout<<"NO"<<endl;
        }
        else if(n==1){
            cout<<"YES"<<endl;
        }
        if(n==2){
            if(abs(points[1]-points[0])>1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }


        }


    }}