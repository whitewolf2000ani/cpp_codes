#include <iostream>
using namespace std;
int ConvertToBinary(int deci);
int ConvertToDecimal(int bin);
int main()
{
    int choice;
    int DecimalNum, BinaryNum;
    cout << "Choose your option for conversion 1.Decimal to binary 2.binary to decimal" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the Integer:" << endl;
        cin >> DecimalNum;
        BinaryNum = ConvertToBinary(DecimalNum);
        cout << "The binary conversion equivalent is:\n"
             << BinaryNum;
        break;

    case 2:
        cout << "Enter the Binary number:" << endl;
        cin >> BinaryNum;
        DecimalNum = ConvertToDecimal(BinaryNum);
        cout << "The binary conversion equivalent is:\n"
             << DecimalNum;
        break;

    default:
        cout << "not the correct choices.";
    }

    return 0;
}

int ConvertToBinary(int deci)
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

int ConvertToDecimal(int bin)
{
    int deci = 0;
    int rem = 0, mul = 1;
    while (bin > 0)
    {
        rem = bin % 10;
        deci += rem * mul;
        mul *= 2;
        bin /= 10;
    }
    return deci;
}