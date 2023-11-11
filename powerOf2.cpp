#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter a Number" << endl;
    cin >> n;
    cout << "let's check if the number " << n << " is a Power of 2\n";

    if (n < 1)
    {
        cout << "Not a power of 2\n";
    }
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            flag = 1;
            break;
        }
        n /= 2;
    }
    if (flag == 1)
    {
        cout << "Not a power of 2\n";
    }
    else
    {
        cout << "power of 2\n";
    }

    return 0;
}