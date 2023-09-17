#include <iostream>
using namespace std;


int main () {

    unsigned char oper;
    double numberOne;
    double numberTwo;
    double result;

    cout << "Enter the first number : \n";
    cin >> numberOne;
    cout << "Enter the second number : \n";
    cin >> numberTwo;
    cout << "Enter the operator you want to use \n";
    cin >> oper;

    switch (oper)
    {
    case '+' :
        result = numberOne + numberTwo;
        cout << "The result = " << result << endl;
        break;
    case '-' :
        result = numberOne - numberTwo;
        cout << "The result = " << result << endl;
        break;
    case '*' :
        result = numberOne * numberTwo;
        cout << "The result = " << result << endl;
        break;
    case '/' :
        if (numberTwo == 0) {
            cout << "can not divide by zero! \n";
        }else {
            result = numberOne / numberTwo;
            cout << "The result = " << result << endl;
        }
        break;
    default:
        cout << "You entered an unvalid operator! \n";
        break;
    }

    return 0;
}