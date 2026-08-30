#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number to search: ";
    cin>>n;
    int arr[5]={10,25,7,42,18};
    int store;
    bool eq=false;
for(int i=0;i<5;i++){
    if (arr[i]==n){
    store=i;
        eq=true;
    }
}
if(eq){
    cout<<store;
}
else{
    cout<< n<<" does not exist";
}
return 0;
}