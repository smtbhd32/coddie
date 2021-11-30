#include<iostream>
using namespace std;

int main(){
    cout<<"This program is for finding if the provided integer is even or odd.\nPls provide the integer...\n";
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"The provided integer is even.";
    }
    else{
        cout<<"The provided integer is odd.";
    }

    return 0;
}