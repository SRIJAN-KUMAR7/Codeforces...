// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int xc,yc,k;
// //         cin>>xc>>yc>>k;
// //         int sx=0;
// //         int sy=0;
// //         for(int i=0;i<k;i++){
// //             // int x = xc + i;
// //             // int y = yc + (i % 2 == 0 ? -i : i);
// //             if(k==1){
// //                 cout << xc << " " << yc << endl;
// //             }
// //             else{
// //                 sx=sx+


// //                  cout << x << " " << y << endl;
// //             }
            
// // }

// // }
// // return 0;

// // }
//  #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;  // Number of test cases

//     while (t--) {
//         int xc, yc, k;
//         cin >> xc >> yc >> k;

//         int baseX = xc;
//         int baseY = yc;
//         int sx=0;
//         int sy=0;


//         for (int i = 0; i < k; ++i) {
//             int x = baseX + i;
//             sx=sx+x;
      
//             int y = baseY + ((i % 2 == 0) ? -i : i);
//             sy=sy+y;
//             if(sx==k*xc && sy==k*yc){
// //                 cout << x << " " << y << endl;

// //             } 
             
          
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;
};

vector<Point> findPoints(int xc, int yc, int k) {
    vector<Point> points;
    if (k == 1) {
        points.push_back({xc, yc});
        return points;
    }

    int offset = 1;
    while (points.size() < k) {
        for (int dx = -offset; dx <= offset; ++dx) {
            for (int dy = -offset; dy <= offset; ++dy) {
                if (abs(dx) + abs(dy) <= offset) {
                    points.push_back({xc + dx, yc + dy});
                    if (points.size() == k) {
                        return points;
                    }
                }
            }
        }
        offset++;
    }

    return points;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        vector<Point> points = findPoints(xc, yc, k);
        for (const Point& p : points) {
            cout << p.x << " " << p.y << endl;
        }
    }

    return 0;
}
