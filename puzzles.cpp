// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int n,m;
// cin >>n>>m;
// vector<int> v(m);
// for(int t=0;t<m;t++){
//     cin>>v[t];
// }
// auto maxEl = *max_element(v.begin(), v.end());
// auto minEl = *min_element(v.begin(), v.end());

// cout<<maxEl-minEl<<endl;

//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int mini = INT_MAX; 
    for (int i = 0; i <= m - n; i++) {
        int c = v[i + n - 1] - v[i]; 
        mini = min(mini, c); 
    }

    cout << mini << endl; 

    return 0;
}
