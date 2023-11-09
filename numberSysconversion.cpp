#include <iostream>
using namespace std;
int ConvertDecimalToBinary(int deci);
int ConvertBinaryToDecimal(int bin);
int ConvertDecimalToOctal(int deci);
int ConvertOctalToDecimal(int oct);
int main()
{
    int choice;
    int DecimalNum, BinaryNum, OctalNum;
    cout << "Choose your option for conversion 1.Decimal to binary 2.binary to decimal 3.Decimal to Octal 4.Octal to Decimal 5.Binary to Octal 6.Octal to Binary" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the Integer:" << endl;
        cin >> DecimalNum;
        BinaryNum = ConvertDecimalToBinary(DecimalNum);
        cout << "The binary equivalent is:\n"
             << BinaryNum;
        break;

    case 2:
        cout << "Enter the Binary number:" << endl;
        cin >> BinaryNum;
        DecimalNum = ConvertBinaryToDecimal(BinaryNum);
        cout << "The Decimal equivalent is:\n"
             << DecimalNum;
        break;

    case 3:
        cout << "Enter the Decimal Number:" << endl;
        cin >> DecimalNum;
        OctalNum = ConvertDecimalToOctal(DecimalNum);
        cout << "The Octal equivalent is:\n"
             << OctalNum;
        break;

    case 4:
        cout << "Enter the Octal number:" << endl;
        cin >> OctalNum;
        DecimalNum = ConvertOctalToDecimal(OctalNum);
        cout << "The Decimal equivalent is:\n"
             << DecimalNum;
        break;

    case 5:
        cout << "Enter the Binary number:" << endl;
        cin >> BinaryNum;
        DecimalNum = ConvertBinaryToDecimal(BinaryNum);
        OctalNum = ConvertDecimalToOctal(DecimalNum);
        cout << "The Octal equivalent is:\n"
             << OctalNum;
        break;

    case 6:
        cout << "Enter the Octal number:" << endl;
        cin >> OctalNum;
        DecimalNum = ConvertOctalToDecimal(OctalNum);
        BinaryNum = ConvertDecimalToBinary(DecimalNum);
        cout << "The Binary equivalent is:\n"
             << BinaryNum;
        break;

    default:
        cout << "not the correct choices.";
    }

    return 0;
}

int ConvertDecimalToBinary(int deci)
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

int ConvertBinaryToDecimal(int bin)
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

int ConvertDecimalToOctal(int deci)
{
    int oct = 0;
    int rem = 0, mul = 1;
    while (deci > 0)
    {
        rem = deci % 8;
        oct = rem * mul + oct;
        mul *= 10;
        deci /= 8;
    }
    return oct;
}

int ConvertOctalToDecimal(int oct)
{
    int deci = 0;
    int rem = 0, mul = 1;
    while (oct > 0)
    {
        rem = oct % 10;
        deci += rem * mul;
        mul *= 8;
        oct /= 10;
    }
    return deci;
}