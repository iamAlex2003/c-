#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May I know your name:- "<<endl;
    getline(cin,name); //to take complete name of i.e ravi kumar not just ravi
    //cin>>name  ;
    cout<<"WELCOME, Mr/Miss "<<name<<"!!"<<endl;

    return 0;
}