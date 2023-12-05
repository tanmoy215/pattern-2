#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter line : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        int a=i;
        if(a>n) a=2*n-i;
        cout<<" "<<a;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" "<<j;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" "<<" ";
        }
        for(int l=n-i;l>=1;l--){
            cout<<" "<<l;
        }
        cout<<endl;
    }
}