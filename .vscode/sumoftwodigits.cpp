#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {  
        int n;
        cin>>n;  
        int x = 0;
        int y = 0; 
        int f = 1;  

        while (n > 0) {  
            int d = n % 10; 
            n /= 10;            
            int p1 =d/2;          
            int p2 =d-p1; 
            if (x<y) {                    
                x+= p2*f;        
                y+= p1*f;        
            } 
            else{                        
                x+= p1*f;       
                y+= p2*f;        
            }
            f*= 10;  
        }
cout<<x<<" "<<y<<endl;  
    }

    return 0;
}
