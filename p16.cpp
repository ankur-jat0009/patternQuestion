#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(i==0||j==n||j==i+1) 
             cout<< j ;
             else
             cout<<" "; 
        }
        cout<<endl;           
     }
    return 0;
}