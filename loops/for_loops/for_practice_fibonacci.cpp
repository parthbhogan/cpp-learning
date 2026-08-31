#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        int next;
        next=a+b;
        cout<<next<<" ";
a=b;
b=next;
    }


return 0;

}