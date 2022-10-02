// C++ Program to Find Volume of Cylinder
#include <iostream>
using namespace std;

int main(){
    float radius, height, volume;
    
    // Taking input from the user
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    
    // Computing volume of cylinder
    volume = 3.14 * radius * radius * height;
    
    // Displaying output
    cout << "Volume of the cylinder is: " << volume << endl;
    
    return 0;
}