#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n; 
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            char ch = (char)a;
            cout<<ch;
            a++;
        }
        int b=65;
        for(int k=i-1;k>=1;k--){
            char chh = (char)b;
            cout<<chh;
             b++;
        }
        cout<<endl;
    }
}