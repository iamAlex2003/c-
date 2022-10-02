#include<iostream>
using namespace std;
int main()
{
    //r=rows c=colounms
    int r, c, a[100][100], b[100][100], sum[100][100];
    cout<<"Enter the number of rows (between 1 and 100): "<<endl;
    cin>>r;
    cout<<"Enter the number of coloumns (between 1 and 100: )"<<endl;
    cin>> c;

    cout<<"\nEnter elements of 1st matrix:\n"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter element"
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{ 
    int array[100],pos,value,size;
    cout<<"Enter size";
    cin>>size;

    cout<<"Enter elements";
    for(int i=0;i<size;i++){
        cin>>array[i];


    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    cout<<"enter position";
    cin>>pos;

    cout<<"Enter value ";
    cin>>value;

    for(int i=size; i>=pos;i--){
        array[i+1]=array[i];
    }
    array[pos]=value;
    cout<<"After inseration";
    for(int i=0; i<(size+1);i++){
        cout<<array[i]<<" ";
    }
    return 0;
}