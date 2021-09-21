#include <iostream>
using namespace std;

void First()
{
    double a, b, S, P;
    cout << "Enter a \n";
    cin >> a;
    cout << "Enter b \n";
    cin >> b;
    S = a * b;
    P = 2 * a + 2 * b;
    cout << "S=" << S << "\nP=" << P << endl;
}
void Second()
{
    double d, pi, L;
    pi = 3.14;
    cout << "Enter diameter\n";
    cin >> d;
    L = pi * d;
    cout << "L=" << L << endl;
}
void Third()
{
    double a, b, Result;
    cout << "Enter a\n";
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
    Result = (a + b) / 2;
    cout << "arithmetical mean = " << Result << endl;
}
void Fourth()
{
    double a, b, plus, minus, multiply, division;
    cout << "Enter a\n";
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
    a = a * a;
    b = b * b;
    plus = a + b;
    minus = a - b;
    multiply = a * b;
    division = a / b;
    cout << "sum = " << plus << " difference = " << minus << " product = " << multiply << " quotiant = " << division << endl;
}
void Fifth()
{
    double a, b, plus, minus, multiply, division;
    cout << "Enter a\n";
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
    a = abs(a);
    b = abs(b);
    plus = a + b;
    minus = a - b;
    multiply = a * b;
    division = a / b;
    cout << "sum = " << plus << " difference = " << minus << "product = " << multiply << " quotiant = " << division << endl;
}
void Error()
{
    cout << "incorrect number\n" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "Choose number of exercise (enter 0 to exit)\n";
        cin >> ExNum;
        if (ExNum == 1)
        {
            First();
        }
        else if (ExNum == 2)
        {
            Second();
        }
        else if (ExNum == 3)
        {
            Third();
        }
        else if (ExNum == 4)
        {
            Fourth();
        }
        else if (ExNum == 5)
        {
            Fifth();
        }
        else if (ExNum == 0)
        {
            break;
        }
        else
        {
            Error();
        }
        
    }
    return 0;
}