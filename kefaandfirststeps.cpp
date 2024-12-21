// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int n;
// cin>>n;
// vector <int> v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }
// int c=0;
// for(int i=0;i<n;i++){
//     int p=i;
//     int q=i+1;
//     if(v[p]<v[q]){
//         p++;
//         q++;
//         c++;
//     }

// }
// cout<<c<<endl;
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m = 1; 
    int c = 1; 

  
    for (int i = 1; i < n; i++) {
       
        if (v[i] >= v[i - 1]) {
            c++; 
        } else {
            
            m = max(m, c);
            c = 1;
        }
    }

    m = max(m, c);
    cout<<m<<endl;

    return 0;
}
