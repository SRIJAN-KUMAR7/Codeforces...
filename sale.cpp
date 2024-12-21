#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> v(n,0);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        v.push_back(-a);
    }
    sort(v.rbegin(),v.rend());
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if (v[i]<=0) break;
        ans+=v[i];
    }
    printf("%d\n",ans);
    return 0;
}