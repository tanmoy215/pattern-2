#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(i==1 || i<=j) cout<<"*";
            else cout<<" ";
        }
        for(int l=2;l<=4;l++){
            if(i==1 || l>=i) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i>=j) cout<<"*";
        else cout<<" ";
    }
    for(int w=n-1;w>=1;w--){
        if(i>=w) cout<<"*";
        else cout<<" ";
    }
        cout<<endl;
    }
}