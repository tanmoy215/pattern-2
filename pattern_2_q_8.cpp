#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(i==j) cout<<i;
            else cout<<" ";
        }
        for(int k=2;k<=n;k++){
            if(k==i) cout<<i;
            else cout<<" ";
        }
        cout<<endl;
    }
}