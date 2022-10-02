#include<iostream>
using namespace std;
int main()
{
    int profit,time,rate;
    float SimpleIntrest;

    cout<<"Enter the amount of PROFIT"<<endl;
    cin>>profit;

    cout<<"Enter RATE"<<endl;
    cin>>rate;

    cout<<"Enter TIME period"<<endl;
    cin>>time;

    cin>>profit,rate,time;

    SimpleIntrest=(profit*rate*time);

    cout<<"SIMPLE INTREST "<<SimpleIntrest<<endl;
    return 0;
}