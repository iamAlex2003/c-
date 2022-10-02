#include<iostream>
using namespace std;
int main()
{
    // How to declare and initialize array

    int array[5]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        cout<<array[i]<<endl;
    }

    // how to print elements of array by their index no
    cout<<array[0]<<endl;
    cout<<array[2]<<endl;
    cout<<array[1]<<endl;

    //you can create array of any data type
    int a[3]={1,2,3};
    char b[3]={'A','B','C'};
    float c[3]={1.2,2.5,3.6};
    

    //if we create array of five elements and fill only two rest of the elements will automaticall zero
    //int f[5]={1,2};
    //cout<<f[4]<<endl;

    //you can give elements it can take size automatically
    // int g[]={1,2,3,4};
    // it can take size 4
    


    return 0;
}
