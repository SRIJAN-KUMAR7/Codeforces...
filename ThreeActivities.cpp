#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];
        
  
        vector<pair<int, int>> ski(n), movie(n), games(n);
        for (int i = 0; i < n; i++) {
            ski[i] = {a[i], i};
            movie[i] = {b[i], i};
            games[i] = {c[i], i};
        }
        
        sort(ski.rbegin(), ski.rend());
        sort(movie.rbegin(), movie.rend());
        sort(games.rbegin(), games.rend());
        
        int m = 0;
        
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (i < ski.size() && j < movie.size() && k < games.size()) {
                        int ski_day = ski[i].second;
                        int movie_day = movie[j].second;
                        int games_day = games[k].second;

                      
                        if (ski_day != movie_day && ski_day != games_day && movie_day != games_day) {
                            int tf = ski[i].first + movie[j].first + games[k].first;
                            m = max(m, tf);
                        }
                    }
                }
            }
        }

        cout << m << endl;
    }

    return 0;
}
