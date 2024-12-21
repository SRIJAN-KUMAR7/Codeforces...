// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// long long n,m,a;
// cin>>n>>m>>a;
// long long k=(n*m)/(a*a);
// cout<<k<<endl;



//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    cin >> n >> m >> a;

    long long fl = (n + a - 1) / a;
    long long fw = (m + a - 1) / a;
    long long total_flagstones = fl * fw;

    cout << total_flagstones << endl;

    return 0;
}
