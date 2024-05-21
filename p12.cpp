#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // upper
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++){ 
             cout<< " " ; 
        }
        for(int k=0;k<i+1;k++){
            if(k==0||k==(i+1)-1){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }

        cout<<endl;           
     }

// lower
     
     for(int i =0;i<n;i++){
        for(int j=0;j<i;j++){ 
             cout<< " " ; 
        }
        for(int k=0;k<(2*n)-(2*i)-1;k++){
       if(k==0||k==((2*n)-(2*i)-1)-1)
            cout<<"* ";
            else
            cout<<" ";
        }
        cout<<endl;           
     }
    return 0;
}