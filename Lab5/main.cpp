#include <iostream>
#include <cmath>
using namespace std;

void First()
{
    double x1, y1, x2, y2, x, y, Length;
    cout << "Enter x1\n";
    cin >> x1;
    cout << "Enter x2\n";
    cin >> x2;
    cout << "Enter y1\n";
    cin >> y1;
    cout << "Enter y2\n";
    cin >> y2;
    x = abs(x1 - x2);
    y = abs(y1 - y2);
    Length = sqrt(x * x + y * y);
    cout << "Length = " << Length << endl;
}
void Second()
{
    double A, B, C, AC, BC, Sum;
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    cout << "Enter C\n";
    cin >> C;
    AC = abs(A - C);
    BC = abs(B - C);
    Sum = AC + BC;
    cout << "AC = " << AC << endl;
    cout << "BC = " << BC << endl;
    cout << "Sum = " << Sum << endl;

}
void Third()
{
    double A, B, C, AC, BC, Prod;
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    cout << "Enter C\n";
    cin >> C;
    AC = abs(A - C);
    BC = abs(B - C);
    Prod = AC * BC;
    cout << "Product = " << Prod<< endl;
}
void Fourth()
{
    double x1, y1, x2, y2, x, y, S, P;
    cout << "Enter x1\n";
    cin >> x1;
    cout << "Enter x2\n";
    cin >> x2;
    cout << "Enter y1\n";
    cin >> y1;
    cout << "Enter y2\n";
    cin >> y2;
    x = abs(x1 - x2);
    y = abs(y1 - y2);
    P = 2 * (x + y);
    S = x * y;
    cout << "Perimeter = " << P << endl;
    cout << "Square = " << S << endl;
}
void Fifth()
{
    double x1, y1, x2, y2, x3, y3, x, y, AB, BC, AC, P, S;
    cout << "Enter x1\n";
    cin >> x1;
    cout << "Enter y1\n";
    cin >> y1;
    cout << "Enter x2\n";
    cin >> x2;
    cout << "Enter y2\n";
    cin >> y2;
    cout << "Enter x3\n";
    cin >> x3;
    cout << "Enter y3\n";
    cin >> y3;
    
    x = abs(x1 - x2);
    y = abs(y1 - y2);
    AB = sqrt(x * x + y * y);

    x = abs(x2 - x3);
    y = abs(y2 - y3);
    BC = sqrt(x * x + y * y);

    x = abs(x1 - x3);
    y = abs(y1 - y3);
    AC = sqrt(x * x + y * y);

    P = AB + AC + BC;
    S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));

    cout << "Perimeter = " << P << endl;
    cout << "Square = " << S << endl;
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