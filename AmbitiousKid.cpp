#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = std::abs(arr[i]);
        }
    }
std::sort(arr, arr + n);
cout<<arr[0]<<endl;

  return 0;
}