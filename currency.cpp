#include <bits/stdc++.h>
using namespace std;

int main()
{
    float amount;
    int n;
    bool noOperation = false;
    char option;

    do
    {
        cout << "Enter the amount " << endl;
        cin >> amount;

        cout << "1 for USD\n2 forEUR\n3 forJPY\n4 for GBP\n5 for AUD\n";
        cout << "Choose the currency you want to conver to - " << endl;
        cin >> n;

        float result;

        switch (n)
        {
        case 1:
            result = amount * 0.013;
            break;
        case 2:
            result = amount * 0.012;
            break;
        case 3:
            result = amount * 1.5;
            break;
        case 4:
            result = amount * 0.0099;
            break;
        case 5:
            result = amount * 0.018;
            break;
        default:
            noOperation = true;
            break;
        }

        if (noOperation)
            cout << "No operation performed\n";
        else
            cout << "Conversion result is = " << result << endl;

        cout << endl
             << "Calculate again (y/n)?" << endl
             << "> ";
        cin >> option;

    } while (toupper(option) == 'Y');

    return 0;
}