#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void sort(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

bool same_elements(int a[], int b[], int size)
{
    // Sort Arrays in order of Least to Greates
    sort(a, size);
    sort(b, size);

    // Traverse through both arrays checking if each index matches
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a[] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
    int b[] = {11, 11, 7, 9, 16, 4, 1, 4, 9};
    int size = sizeof(a) / sizeof(a[0]);

    if (same_elements(a, b, size))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}