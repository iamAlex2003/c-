#include<iostream>
using namespace std;
int main()
{
    int array[5]={2,4,6,8,10};

    for(int i=0; i<5;i++){

        cout<<array[i]<<endl;
    }
// print elements in different manner
    int arr[5]={1,3,5,7,9};

    for(int x:arr){
        //insted of data type auto is used for automatically detection what type of data type is used
        // for(auto x:arr)
        cout<<x<<endl;
    }
    return 0;
}