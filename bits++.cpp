// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int x=0;
//     char s[4];

//     for(int i=0;i<n;i++){
//         cin>>s[i];
//         if(s[1]=='+'){
//             x++;
//         }
//         else if(s[1]=='-'){
//             x--;
//         }


//     }
//     cout<<x<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    char s[4];

    for(int i = 0; i < n; i++){
        cin >> s;  
        if(s[1] == '+'){ 
            x++;
        }
        else if(s[1] == '-'){  
            x--;
        }
    }

    cout << x << endl;  
    return 0;
}
