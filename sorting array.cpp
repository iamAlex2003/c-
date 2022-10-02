#include <iostream>
using namespace std;
int main()
{
    int array[100], size, temp;
    cout << "Size of an array:" << endl;
    cin >> size;

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
  
    // soring logic
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i]; // swapping logic
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Sorting array--> " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}