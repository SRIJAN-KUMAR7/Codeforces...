#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin>>t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        int max_play =n/k;
        int max_jokers=min(max_play, m);
        int rem_joker = m - max_jokers;
        int max_joker_other;
        if (k > 1) {
        max_joker_other = (rem_joker+k-2)/(k-1);
        } else {
        max_joker_other = 0;}
        int point = max_jokers - max_joker_other;
        cout<<point<< endl;
    }
 return 0;
}
