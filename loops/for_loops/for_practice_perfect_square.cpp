#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
bool found=false;
for(int i=1;i<=n;i++){
if(i*i ==n)
{
    found = true;
}
}
if(found)
{
    cout<<n<<" is a pefect square";
}
else
{
    cout<<n<<" is not a perfect square";
}

return 0;
}