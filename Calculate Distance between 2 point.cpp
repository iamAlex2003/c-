#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x1, x2, y1, y2;
    float distance;

    cout << "Enter the points for the coordinates";
    cout << endl;
    cout << "Point x for first coordinates: ";
    cin >> x1;
    cout << endl;
    cout << endl;
    cout << "Point y for first coordinate: ";
    cin >> y1;
    cout << endl;
    cout << endl;
    cout << "Point x for the second coordinate: ";
    cin >> x2;
    cout << endl;
    cout << endl;
    cout << "Point y for the second coordinate: ";
    cin >> y2;
    cout << endl;
    cout << endl;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << " Shortest Distance between 2 points is " << distance << endl;

    return 0;
}