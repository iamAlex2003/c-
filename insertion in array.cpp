#include <iostream>
using namespace std;
int main()
{
    int array[100], pos, value, size;

    cout << "Enter the size" << endl;
    cin >> size;

    cout << endl;
    cout << "Enter elements in array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Enter position of new element:" << endl;
    cin >> pos;

    cout << "Enter the value of new element: " << endl;
    cin >> value;
    for (int i = size; i >= pos; i--)
    {
        array[i + 1] = array[i];
    }
    array[pos] = value;
    cout << "Array after insertion " << endl;
    for (int i = 0; i < (size + 1); i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}