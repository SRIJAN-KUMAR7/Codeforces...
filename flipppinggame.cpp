// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// int n;
// cin>>n;
// vector<int>a(n);
// int cnt1,cnt0;
// for(int i=0;i<n;i++){
//   cin>>a[i];
//   if(a[i]==1){
//     cnt1++;
//   }
//   else{
//     cnt0++;
//   }
// }
// cout<<cnt1+(cnt0/2)<<endl;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m1 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int cnt = 0;
            for (int k = 0; k < n; k++) {
                if (k>=i && k<=j) { 
                    cnt+=(1-a[k]); 
                } else { 
                    cnt += a[k];
                }
            }
            m1 = max(m1, cnt);
        }
    }
    cout << m1 << endl;
    return 0;
}
Input:
5
1 0 0 1 0
