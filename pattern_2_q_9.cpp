#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter line : ";
    cin>>n;
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=n+1;j++){
            if(i==n+1 || j==n+1 || i+j==n+2) cout<<"*";
            else cout<<" ";
        }
        for(int l=n;l>=1;l--){
            if(i==n+1 || i+l==n+2) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j==n || i==j) cout<<"*";
            else cout<<" ";
        }
        for(int m=n-1;m>=0;m--){
            if(i==m) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}