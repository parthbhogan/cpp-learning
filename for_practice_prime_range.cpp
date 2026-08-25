#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter starting number number: ";
    cin>>n;
    int m;
    cout<<"enter ending number: ";
    cin>>m;
    for(int i=n;i<=m;i++){
        if(i < 2)
    continue;
            bool isprime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        
        }
        if(isprime){
            cout<<i<<" ";
        }
    }
    return 0;
}