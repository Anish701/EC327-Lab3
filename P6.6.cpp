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

bool magic(int a[4][4])
{
    // Get sum from diagonal
    int sum = a[0][0] + a[1][1] + a[2][2] + a[3][3];
    // Check if other diagonal also has same sum
    if ((a[0][3] + a[1][2] + a[2][1] + a[3][0]) != sum)
    {
        return false;
    }

    // Check sum of rows
    for (int i = 0; i < 4; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 4; j++)
        {
            rowSum += a[i][j];
        }
        if (rowSum != sum)
        {
            return false;
        }
    }

    // Check sums of columns
    for (int i = 0; i < 4; i++)
    {
        int colSum = 0;
        for (int j = 0; j < 4; j++)
        {
            colSum += a[j][i];
        }
        if (colSum != sum)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a[4][4];
    int checker[16];

    // Input for First Row
    cout << "Enter First Row First Column: ";
    cin >> a[0][0];
    cout << "Enter First Row Second Column: ";
    cin >> a[0][1];
    cout << "Enter First Row Third Column: ";
    cin >> a[0][2];
    cout << "Enter First Row Fourth Column: ";
    cin >> a[0][3];

    // Input for Second Row
    cout << "Enter Second Row First Column: ";
    cin >> a[1][0];
    cout << "Enter Second Row Second Column: ";
    cin >> a[1][1];
    cout << "Enter Second Row Third Column: ";
    cin >> a[1][2];
    cout << "Enter Second Row Fourth Column: ";
    cin >> a[1][3];

    // Input for Third Row
    cout << "Enter Third Row First Column: ";
    cin >> a[2][0];
    cout << "Enter Third Row Second Column: ";
    cin >> a[2][1];
    cout << "Enter Third Row Third Column: ";
    cin >> a[2][2];
    cout << "Enter Third Row Fourth Column: ";
    cin >> a[2][3];

    // Input for Fourth Row
    cout << "Enter Fourth Row First Column: ";
    cin >> a[3][0];
    cout << "Enter Fourth Row Second Column: ";
    cin >> a[3][1];
    cout << "Enter Fourth Row Third Column: ";
    cin >> a[3][2];
    cout << "Enter Fourth Row Fourth Column: ";
    cin >> a[3][3];
    cout << endl;

    // Loads in Values to Checker Array
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            checker[count] = a[i][j];
            count += 1;
        }
    }
    sort(checker, 16);
    for (int i = 0; i < 16; i++)
    {
        if (checker[i] != i + 1)
        {
            cout << "Each of numbers 1, 2, ..., 16 DO NOT occur in user inputs." << endl;
            cout << "Therefore this CANNOT be a magic square." << endl;
            return 0;
        }
    }

    if (magic(a))
    {
        cout << "TRUE. This is a Magic Square." << endl;
        cout << "Each of numbers 1, 2, ..., 16 do occur in user inputs." << endl;
        cout << "When the numbers are put into a square, the sums of the rows, columns, and diagonals equal to each other " << endl;
    }
    else
    {
        cout << "FALSE. This is NOT a Magic Square." << endl;
        cout << "Each of numbers 1, 2, ..., 16 do occur in user inputs." << endl;
        cout << "BUT When the numbers are put into a square, the sums of the rows, columns, and diagonals DO NOT equal to each other " << endl;
    }
    return 0;
}