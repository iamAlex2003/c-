#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high)
{
    // repeat until the pointers low and high meetach other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            return mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main(void)

{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x;
    cout << "Enter number " << endl;
    cin >> x;

    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n - 1);

    if (result == -1)
        cout << "Not Found" << endl;

    else
        cout << "Number found at index: " << result << endl;
    
}



