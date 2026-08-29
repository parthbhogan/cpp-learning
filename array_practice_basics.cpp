#include<iostream>
using namespace std;
int main(){
   int arr[5]={};
   int i;
   for( i=0;i<5;i++){
   cout<<"enter 5 numbers:";
   cin>>arr[i];
   }

   for(int j=0;j<5;j++){
  cout<<arr[j]<<" "<<endl;
   }
return 0;
}