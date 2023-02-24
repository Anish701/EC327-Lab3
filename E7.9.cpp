#include <iostream>
#include <cmath>
#include <string>
using namespace std;

char *replace_all(const char s[], const char t[], const char u[])
{
    int i = 0;
    string r;
    while (s[i])
    {
        if (s[i] == t[0])
        {
            int tmp = i;
            int j = 0;
            bool isIn = true;
            // check if t is in s
            while (t[j])
            {
                if (t[j] != s[tmp])
                {
                    isIn = false;
                    break;
                }
                tmp++;
                j++;
            }

            // if t is in s replace t with u
            if (isIn)
            {
                int k = 0;
                while (u[k])
                {
                    r = r + u[k];
                    k++;
                }
                i = i + j;
            }
            else
            {
                r = r + s[i];
                i++;
            }
        }
        else
        {
            r = r + s[i];
            i++;
        }
    }

    int len = r.size();
    char *n = new char[len];
    cout << n << endl;
    for (int i = 0; i < len; i++)
    {
        n[i] = r[i];
        cout << n[i] << ", ";
    }
    cout << endl;
    cout << n << endl;
    return n;
}

int main()
{
    char *n = replace_all("eleeeementee", "ee", "x");
    cout << n << endl;
    cout << endl;
    return 0;
}