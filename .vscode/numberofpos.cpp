#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,a,b;
cin>>n>>a>>b;
cout<<(n-max(a+1,n-b)+1)<<endl;


//{std::cin>>n>>a>>b;std::cout<<(n-a>b?b+1:n-a);}

  return 0;
}