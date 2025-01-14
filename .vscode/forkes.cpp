#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int a,b,kx,ky,qx,qy;
    cin>>a>>b>>kx>>ky>>qx>>qy;
    int moves=0;
	int dx[8]={-a,-a,-b,-b,a,a,b,b},dy[8]={b,-b,a,-a,b,-b,a,-a};
	for(int i=0;i<8;++i){
		for(int j=0;j<8;++j)
        if(kx+dx[i]==qx+dx[j]&&ky+dy[i]==qy+dy[j]){
			++moves;
			}
		}
		if(a==b)moves/=4;
		cout<<moves<<endl;
}
  return 0;
}