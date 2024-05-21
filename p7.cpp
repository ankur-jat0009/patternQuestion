#include<iostream>
using namespace std;

int main(){
    int n1;
    cin>>n1;
    int n= n1/2;
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++){ 
             cout<< " " ; 
        }
        for(int k=0;k<i+1;k++){
            cout<<"*";
        }
        cout<<endl;           
     }
      for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){ 
             cout<< " " ; 
        }
        for(int k=0;k<n-i-1;k++){
            cout<<"*";
        }
        cout<<endl;           
     }
    return 0;
}