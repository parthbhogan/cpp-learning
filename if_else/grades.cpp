#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"enter your marks:";
    cin>> marks;
if(marks >= 90)
{
    cout << "Grade A" << endl;
}
else if(marks >= 75)
{
    cout << "Grade B" << endl;
}
else if(marks >= 60)
{
    cout << "grade C" << endl;
}
else if(marks >= 40)
{
    cout << "Grade D" << endl;
}
else
{
    cout << "fail" << endl;
}

    return 0;
}