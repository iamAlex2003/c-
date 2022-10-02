#include <iostream>
using namespace std;
int main()
{
    int avg, sum = 0;
    int marks[30];
    for (int i = 0; i < 30; i++)
    {
        cout << "Enter Marks" << i << endl;
        cin >> marks[i];
    }
    for (int i = 0; i < 30; i++)
    {
        sum = sum + marks[i];
        avg = sum / 30;
        cout << "Avg is: " << avg << endl;
    }
    return 0;
}