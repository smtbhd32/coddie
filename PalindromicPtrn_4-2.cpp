#include<iostream>
using namespace std;

int main(){
    cout<<"Palindromic Pattern\nInput n...\n";
    int n;
    cin>>n;
    for(int r=1; r<=n; r++){
        int i,j,k;
        for(i=1; i<=(n-r)*2; i++){
            cout<<" ";
        }
        for(j=r; j>1; j--){
            cout<<j<<" ";
        }
        for(k=1; k<=r; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}