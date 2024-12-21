#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int u = 0;
        for (char c : s)
        {
            if (c=='U')
            {
                u++;
            }
        }
        if (u%2 == 1)
        {
            cout<<"YES"<< endl;
        }
        else
        {
            cout<<"NO"<< endl;
        }
    }
    return 0;
}
