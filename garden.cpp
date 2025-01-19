#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if (x1 == x2) {
        int s = abs(y2 - y1);
        cout << x1 + s << " " << y1 << " " <<x2 + s << " " << y2<<endl;
    } 
    else if (y1 == y2) { 
        int s = abs(x2 - x1);
        cout<<x1<<" "<<y1 + s << " " <<x2<< " " <<y2 +s << endl;
    } 
    else if (abs(x2 - x1) == abs(y2 - y1)) {  
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    } 
    else { 
        cout<<-1<<endl;
    }
    return 0;
}
