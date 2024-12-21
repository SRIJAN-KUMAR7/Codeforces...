// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n, m, k;
// //         cin >> n >> m >> k;

// //         set<int> a; 
// //         set<int> b; 
        
   
// //         for (int i = 0; i < n; ++i) {
// //             int value;
// //             cin >> value;
// //             a.insert(value);
// //         }

// //         for (int i = 0; i < m; ++i) {
// //             int value;
// //             cin >> value;
// //             b.insert(value);
// //         }

// //         vector<int> a1;  
// //         vector<int> b1;  

// //         int count_a = 0;
// //         int count_b = 0;

        
// //         for (int i = 1; i <= k; ++i) {
// //             if (a.find(i) != a.end()) {
// //                 count_a++;
// //                 a1.push_back(i);
// //             }
// //             if (b.find(i) != b.end()) {
// //                 count_b++;
// //                 b1.push_back(i);
// //             }
// //         }
// //         if (count_a < k / 2 || count_b < k / 2) {
// //             cout << "NO" << endl;
// //         } else {
// //             cout << "YES" << endl;
// //         }
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;

//         set<int> a; 
//         set<int> b; 

//         for (int i = 0; i < n; ++i) {
//             int value;
//             cin >> value;
//             a.insert(value);
//         }

//         for (int i = 0; i < m; ++i) {
//             int value;
//             cin >> value;
//             b.insert(value);
//         }

//         int countA = 0, countB = 0;//distinct ke liye
//         bool canCover = true;

//         for (int i = 1; i <= k; ++i) {
//             if (a.find(i) == a.end() && b.find(i) == b.end()) {
//                 canCover = false;
//                 break;
//             }
            
//             if (a.find(i) != a.end() && b.find(i) == b.end()) {
//                 countA++;
//             }
//             if (a.find(i) == a.end() && b.find(i) != b.end()) {
//                 countB++;
//             }
//         }

//         if (canCover && countA <= k / 2 && countB <= k / 2) {
// //             cout << "YES" << endl;
// //         } else {
// //             cout << "NO" << endl;
// //         }
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;

//         vector<int> a(n), b(m);
//         set<int> setA, setB;

//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             if (a[i] >= 1 && a[i] <= k) {
//                 setA.insert(a[i]);
//             }
//         }

//         for (int i = 0; i < m; ++i) {
//             cin >> b[i];
//             if (b[i] >= 1 && b[i] <= k) {
//                 setB.insert(b[i]);
//             }
//         }

     
//         if (setA.size() >= k / 2 && setB.size() >= k / 2) {
//             // Combine both sets
//             set<int> combinedSet = setA;
//             combinedSet.insert(setB.begin(), setB.end());

           
//             bool canCoverAll = true;
//             for (int i = 1; i <= k; ++i) {
//                 if (combinedSet.find(i) == combinedSet.end()) {
//                     canCoverAll = false;
//                     break;
//                 }
//             }

//             if (canCoverAll) {
//                 cout << "YES" << endl;
//             } else {
//                 cout << "NO" << endl;
//             }
//         } else {
//             cout << "NO" << endl;
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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        set<int> setA, setB;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] >= 1 && a[i] <= k) {
                setA.insert(a[i]);
            }
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
            if (b[i] >= 1 && b[i] <= k) {
                setB.insert(b[i]);
            }
        }

        
        if (setA.size() >= k / 2 && setB.size() >= k / 2) {
            // Combine both sets
            set<int> combinedSet = setA;
            combinedSet.insert(setB.begin(), setB.end());

            
            bool canCover = true;
            for (int i = 1; i <= k; ++i) {
                if (combinedSet.find(i) == combinedSet.end()) {
                    canCover = false;
                    break;
                }
            }

            if (canCover) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

