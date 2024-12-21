#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string xml;
    cin>>xml;
    int h=0;
    for (int i= 0;i< xml.length(); i++) {
        if (xml[i] =='<') {
            if (xml[i + 1] == '/') {
                h--;
                cout << string(2 * h,' ')<<"</"<< xml[i + 2] <<">"<< endl;
                i+=3;
            } else {
                cout << string(2 * h,' ') <<"<"<< xml[i + 1] <<">"<< endl;
                h++;
                i+=2;
            }
        }
    }
    return 0;
}
