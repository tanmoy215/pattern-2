#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n; 
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            nsp--;
        }
        int a =65;
        for(int k=i-1;k>=0;k--){
            cout<<(char)('A'+k);
        }
       for(int l=1;l<i;l++){
           cout<<(char)('A'+l);
       }
        cout<<endl;
    }
}