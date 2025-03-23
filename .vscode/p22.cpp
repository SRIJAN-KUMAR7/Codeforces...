#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >>n >> m;
        int g[n][m];
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++) {
                g[i][j]= s[j]=='1'?1:0;
            }
        }
        
        bool pos = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (g[i][j] == 1) {
                    bool l = true;
                    for (int k = 0; k < j; ++k) {
                        if (g[i][k] != 1) {
                            l = false;
                            break;
                        }
                    }
                    if (l) continue;
                    bool u = true;
                    for (int k=0;k<i; k++) {
                        if (g[k][j]!= 1) {
                            u=false;
                            break;
                        }
                    }
                    if(u)continue;
                    pos = false;
                    goto end_check;
                }
            }
        }
        end_check:
        cout << (pos?"YES":"NO")<<'\n';
    }
    
    return 0;
}