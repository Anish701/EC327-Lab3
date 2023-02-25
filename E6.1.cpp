#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    // Initializes array of size 10 with 10 random integers
    srand(time(NULL));
    int arr[10];
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        arr[i] = rand();
    }

    // Prints out Array Values
    cout << "Array Values: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    cout << endl;

    // Every Element at an Even Index
    cout << "Every Element at an Even Index: ";
    for (int i = 0; i < len; i += 2)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    cout << endl;

    // Every Even Element
    cout << "Every Even Element: ";
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
    cout << endl;

    // All Elements in Reverse Order
    cout << "All Elements in Reverse Order: ";
    for (int i = len - 1; i >= 0; i--)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    cout << endl;

    // Only First and Last Element
    cout << "First Element: " << arr[0] << "     Last Element: " << arr[len - 1] << endl;
    cout << endl;

    return 0;
}