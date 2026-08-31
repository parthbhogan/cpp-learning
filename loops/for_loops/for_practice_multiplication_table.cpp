#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter a number: ";
    cin>>n;
    int limit;
    int mul;
    cout<<"enter the limit: ";
    cin>>limit;
    for(int i=1;i<=limit;i++){
        mul=n*i;
        cout<<n<<"x"<<i<<"="<<mul<<endl;
    }
return 0;
}