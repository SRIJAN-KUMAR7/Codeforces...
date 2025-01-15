#include <bits/stdc++.h>
using namespace std;
unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
  long long n,d;
  cin>>n>>d;
  long long  fact=factorial(n);
  long long sum=d*fact;
  cout<<1<<" ";
  if(sum%3==0){
    cout<<3<<" ";
  }
  if(d==5){
    cout<<5<<" ";
  }
 if(d==7||n>3 ){
   cout<<7<<" ";
 }
  if(sum%9==0){
    cout<<9<<" ";
  }
  cout<<endl;
}

  return 0;
}