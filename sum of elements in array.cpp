#include <iostream>
using namespace std;
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, i;
    for (i = 0; i < 10; i++)
    {
        sum = sum + array[i];
    }
    cout << "Sum is: " << sum;
    return 0;
}