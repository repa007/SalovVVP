#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    string Deg;
    double Rad;
    cout << "You need to enter degrees (from 0 to 360)\n";
    cin >> Deg;
    if ((stod(Deg) > 360) or (stod(Deg) < 0))
    {
        cout << "incoorrect angle\n";
    }
    else
    {
        Rad = stod(Deg) / 180;
        cout << Rad << "*pi radians" << endl;
    }
}
void Second()
{
    string Rad;
    double Deg;
    cout << "You need to enter radians (from 0 to 2)\n";
    cin >> Rad;
    if ((stod(Rad) > 2) or (stod(Rad) < 0))
    {
        cout << "incoorrect angle\n";
    }
    else
    {
        Deg = stod(Rad) * 180;
        cout << Deg << " Degrees" << endl;
    }
}
void Third()
{
    string X, A, Y ;
    double P, PY;
    cout << "You need to enter A and B\n";
    cout << "Enter primordial weight of sweets (X)\n";
    cin >> X;
    cout << "Enter price of X kilograms (A)\n";
    cin >> A;
    cout << "Enter needed weight (Y)\n";
    cin >> Y;
    P = stod(A) / stod(X);
    PY = stod(Y) * P;
    

    cout << "Price for kg = " << P << endl;
    cout << "Price for new weight = " << PY << endl;
}
void Fourth()
{
    string V1, V2, S, T;
    double dist;
    cout << "Enter speed of the first car in km/h (V1)\n";
    cin >> V1;
    cout << "Enter speed of the first car in km/h (V2)\n";
    cin >> V2;
    cout << "Enter primordial distance between cars in km (S)\n";
    cin >> S;
    cout << "Enter moving time in hours (T)\n";
    cin >> T;
    
    dist = stod(S) + stod(T) * (stod(V1) + stod(V2));
    cout << "Now distance between cars = " << dist << endl;
    
}
void Fifth()
{
    double A, B, x;
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    x = -B / A;
    cout << "x = " << x << endl;
}
void Sixth()
{
    double A1, A2, B1, B2, C1, C2, dx, dy, d, x, y;
    cout << "type:\nA1 * x + B1 * y = C1\nA2 * x + B2 * y = C2\n";
    cout << "Enter A1" << endl;
    cin >> A1;
    cout << "Enter B1" << endl;
    cin >> B1;
    cout << "Enter C1" << endl;
    cin >> C1;
    cout << "Enter A2" << endl;
    cin >> A2;
    cout << "Enter B2" << endl;
    cin >> B2;
    cout << "Enter C2" << endl;
    cin >> C2;

    d = A1 * B2 - A2 * B1;
    dx = C1 * B2 - C2 * B1;
    dy = A1 * C2 - A2 * C1;
    x = dx / d;
    y = dy / d;

    cout << "x = " << x << " y = " << y << endl;
    
}

void Error()
{
    cout << "incorrect number\n" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "Choose number of exercise (enter 0 to exit)\n"
            << "1) Degree to radians\n"
            << "2) Radians to degree\n"
            << "3) Price of the sweets\n"
            << "4) Distance between receding cars\n"
            << "5) find x in: A * x + B = 0\n"
            << "6) Find a solution to a system of linear equations\n";
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
        else if (ExNum == 6)
        {
            Sixth();
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