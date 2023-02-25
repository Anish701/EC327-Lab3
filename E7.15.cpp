#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int *read_data(int &size)
{
    int count = 0;
    int len = size;
    int *arr = new int[len];
    while (true)
    {
        int input;
        cout << "Enter Input (Enter 0 to Quit): ";
        cin >> input;
        if (input == 0)
        {
            return arr;
        }

        if (count == len)
        {
            len *= 2;
            int *arrNew = new int[len];
            for (int i = 0; i < len / 2; i++)
            {
                arrNew[i] = arr[i];
            }
            arr = arrNew;
        }
        arr[count] = input;
        count++;
    }
    return arr;
}

int main()
{
    int x = 10;
    int *a = read_data(x);

    // Outputs Result
    while (*a)
    {
        cout << *a << ", ";
        a++;
    }
    cout << endl;
    return 0;
}