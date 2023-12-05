#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n+1) cout<<"*";
            else cout<<" ";
        }
         for(int k=n-1;k>=1;k--){
             if(i+k==n+1) cout<<"*";
             else cout<<" ";
        }
        cout<<endl;
    }
    //down part
   for(int a=1;a<=n-1;a++){
        for(int b=0;b<=n-1;b++){
            if(a==b) cout<<"*";
            else cout<<" ";
        }
        for(int l=1;l<=n-1;l++){
            if(a+l==n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}