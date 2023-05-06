#include <iostream>
using namespace std;

int main()
{
    int n, m, temp;
    cin >> m;
    cin >> n;

    temp = n;
    int count = 0;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    int k = 1;
    for (int i = 0; i < count; i++)
    {
        k *= 10;
    }

    temp = m;
    for (int i = 0; i < count; i++)
    {
        while (temp >= k - 1)
        {
            if (temp % k == n)
            {
                cout << "Find";
                return 0;
            }
            temp = temp / 10;
        }
        if (temp % k == n)
        {
            cout << "Find";
            return 0;
        }
    }
    cout<<"NOT FIND";
}