# include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i= 0 ;i<t;i++){
        int  x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int  d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        int  a=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        if(d>a){
            
            cout<<a*a<<endl;
        }else{
            cout<<d*d<<endl;
        }
        
        
    }
}