#include <iostream>
using namespace std;
int ConvertTOBinary(int deci);
int main()
{
    int DecimalNum, BinaryNum;
    cout << "Enter the Integer:" << endl;
    cin >> DecimalNum;
    BinaryNum = ConvertTOBinary(DecimalNum);
    cout << "The binary conversion equivalent is:\n"
         << BinaryNum;
    return 0;
}

int ConvertTOBinary(int deci)
{
    int rem, bin = 0, mul = 1;
    while (deci > 0)
    {
        rem = deci & 1;
        bin = rem * mul + bin;
        deci >>= 1;
        mul *= 10;
    }
    return bin;
}
