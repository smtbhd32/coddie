#include<iostream>
using namespace std;

int main(){
    cout<<"To find all the prime no. b/w two number, provide the no.\n";
    int a,b;
    cin>>a>>b;
    cout<<"Prime no. are\n";
    for(int i=min(a,b); i<max(a,b); i++){
        if(i<=2){
            cout<<i<<", ";
        }
        else{
            int c;
            for(c=2; c<i; c++){
                if(i%c==0){
                    break;
                }
            }
            if(c==i){
                cout<<i<<", ";
            }
        }
    }

    return 0;
}