#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n; 
    for(int i=1;i<=2*n-1;i++){
        cout<<" "<<(char)(64+i);
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" "<<(char)(64+j);
        }
         for(int k=1;k<=2*i-1;k++){
           cout<<" "<<" ";
         }
         for(int j=n+i;j<=2*n-1;j++){
             cout<<" "<<(char)(64+j);
         }
        cout<<endl;
    }
}