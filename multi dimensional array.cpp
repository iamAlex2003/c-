#include<iostream>
using namespace std;
int main()
{
    // initializing of array
    int a[2][3]={{1,2,3},{4,5,6}};
    //int b=[2][3]={1,2,3,4,5,6};
    // int c[2][3]={1,2}---> rest of the emelments will get automatically zero value

    //for accesing elements of array we requaired nested dor loop 
    //one for loop is for coloumn and another for loop for row

    for(int i=0; i<2;i++){
        for (int j=0; j<3;j++)
        {
            cout<< a[i][j];
        }
        cout<<endl;
    }



    return 0;
}