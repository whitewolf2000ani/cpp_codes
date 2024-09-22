#include <iostream>
using namespace std;

int main()
{
    // printing the last digit of a number
    //  and the digits except the last digit
    int num, rem;
    cout << "Enter the number\n";
    cin >> num;
    rem = num % 10;
    num /= 10;
    cout << "The last digit is\n";
    cout << rem;
    cout << "\nThe digit except the last digit\n";
    cout << num;
    cout << "done some configs";
    return 0;
}
