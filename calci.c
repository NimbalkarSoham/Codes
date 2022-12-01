#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char calc;
    do{
    cout << "Enter two Numbers" << endl;
    cin >> a >> b;
    cout << "Enter Oprand" << endl;
    cin >> calc;
        switch (calc)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case 'a':
            break;
        default:
            cout << "Enter Proper Operand" << endl;
            break;
        }
    } while (calc != 'a');

    return 0;
}