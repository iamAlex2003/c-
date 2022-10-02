#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c; /* ax2+bx+c=0 */
    float r1,r2,desc,d;

    cout<<"Enter the coefficient of quadriatic equation"<<endl;
    cin>>a>>b>>c;

    desc=(b*b)-(4*a*c);
    d=2*a;

    if(desc>0)
    {
        cout<<"\n Roots are REAL and UNEQUAL";
        r1=(-b+sqrt(desc))/d;
        r2=(-b-sqrt(desc))/d;

        cout<<endl<<"Root1= "<<r1;
        cout<<endl<<"Root2= "<<r2;
    }
    else (desc==0);
    {
        cout<<"\n Roots are REAL and EQUAL";
        r1=-b/d;
        r2=r1;

        cout<<endl<<"Root1= "<<r1;
        cout<<endl<<"Root2= "<<r2;

    }
    else (desc<0);
    {
        cout<<"\n Roots are IMAGINARY";
    }
    return 0;
}