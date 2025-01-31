#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;

if(n<=3 && n!=1){
cout<<"NO SOLUTION"<<endl;
return 0;
}
else if(n==1){
    cout<<1<<endl;
    return 0;
}
else{
 vector<long long>even,odd;

 for(int i=1;i<=n;i++){
    if(i%2==0){
        even.push_back(i);
    }
    else{
        odd.push_back(i);
    }
 }
  vector<int> arr;
    arr.insert(arr.end(), even.begin(), even.end());
    arr.insert(arr.end(), odd.begin(), odd.end());
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }

}
  return 0;
}