#include <iostream>
using namespace std;
int main()
{
    int array[10] = {11, 12, -25, -96, 754, 14, 85, 23, 76, 53};
    int negative, positive;
    int pcout = 0, ncout = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > 0)
        {
            cout << "positive at index " << i << endl;
            pcout++;
        }
        else
        {
            cout << "negative" << endl;
            ncout++;
        }
    }
    cout << "positive number count is: " << pcout << "            "
         << "Negative number count is: " << ncout << endl;
    return 0;
}