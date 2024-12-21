#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A ==0) {
        if (B ==0) {
            if (C ==0) {
                cout<<-1<< endl;
            } else {
                cout<<0<< endl;
            }
        } else {
            double root = -C / B;
            cout << 1 << endl;
            cout << fixed << setprecision(10) << root << endl;
        }
    } else {
        double D=B*B-4*A*C; 

        if (D<0) {
            cout <<0<<endl;
        } else if (D == 0) {
            double root=-B/(2*A);
            cout << 1 << endl;
            cout << fixed << setprecision(10) << root << endl;
        } else {
            double sqrtD = sqrt(D);
            double root1 = (-B - sqrtD) / (2 * A);
            double root2 = (-B + sqrtD) / (2 * A);
            cout << 2 << endl;
            cout << fixed << setprecision(10) << min(root1, root2) << endl;
            cout << fixed << setprecision(10) << max(root1, root2) << endl;
        }
    }

    return 0;
}
