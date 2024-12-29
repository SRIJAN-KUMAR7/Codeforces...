#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    queue<int>q;  
    vector<int> candi(n); 

   
    for (int i = 0; i < n; i++) {
        cin>>candi[i];
        q.push(i + 1);  //1-based kr dete hai
    }

    int bach_gya= 0;
    while (!q.empty()) {
        int current = q.front();  
        q.pop();
        candi[current - 1] -= m; 
        if (candi[current - 1] > 0) {
            q.push(current); 
        }
        bach_gya= current;  
    }
    cout <<bach_gya<< endl;  
    return 0;
}
