#include<iostream>
using namespace std;

int main(){
    cout<<"To print Butterfly Pattern, input n...\n";
    int n;
    cin>>n;
    for(int r=1; r<=n; r++){
        for(int c=1; c<=n; c++){
            if(c>r&&c<=n-r||c>n-r+1&&c<r){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }


    return 0;
}