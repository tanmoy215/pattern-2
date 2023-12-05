#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) cout<<"*";
            else cout<<" ";
        }
        for(int l=1;l<=n-1;l++){
            if(i+l==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=1;k++){
            cout<<"*";
        }
        
          for(int s=n-i;s>=1;s--){
              cout<<" ";
         }
          for(int j=n-i+1;j>=1;j--){
              cout<<" ";
         }
        for(int i=1;i<=1;i++){
            cout<<"*";
        }
         
        cout<<endl;
    }
    for(int k=1;k<=n;k++){
        cout<<" ";
    }
    for(int l=1;l<=1;l++){
        cout<<"*";
    }
}
*/