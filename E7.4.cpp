#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double *maximum(double *a, int size)
{
    if (size == 0)
    {
        return nullptr;
    }
    // Traverse and find max index
    double *max = a;
    double *itr = a;
    itr++;
    for (int i = 1; i < size; i++)
    {
        if (*itr > *max)
        {
            max = itr;
        }
        itr++;
    }
    return max;
}

int main()
{
    // TEST CASE
    double arr[7] = {2.1, 3.7, 15.3, 12, 1, 9.4, 19.5};
    cout << (maximum(arr, 7)) << " stores max value " << *(maximum(arr, 7)) << endl;
    return 0;
}