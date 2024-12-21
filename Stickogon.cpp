#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int arr[n];
  int c=0;
  int pcount=0;
  for(int i=0;i<n;i++){
  cin >> arr[i];
  }
  if(n==1 && n==2){
  cout <<0<< endl;
  }
  else{
      int n = sizeof(arr) / sizeof(arr[0]);
    int frequency[n];
    
    
    for (int i = 0; i < n; i++) {
        frequency[i] = -1;
    }

    
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }
  
   
   for(int i=0;i<n;i++){
           if(frequency [i]>=3){
           c=c+frequency [i]/3;
        }
        
    }
    cout << c << endl;
  
  
  
  
  
  
  
  }
  }

}