#include <iostream>
#include <cmath>
using namespace std;

void First()
{
    string A, B, Mem1;
    cout << "You need to enter A and B\n";
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;

    Mem1 = A;
    A = B;
    B = Mem1;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
}
void Second()
{
    string A, B, C, Mem1, Mem2;
    cout << "You need to enter A, B and C\n";
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    cout << "Enter C\n";
    cin >> C;

    Mem1 = A;
    A = C;
    Mem2 = B;
    B = Mem1;
    C = Mem2;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;

}
void Third()
{
    string A, B, C, Mem1, Mem2;
    cout << "You need to enter A and B\n";
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    cout << "Enter C\n";
    cin >> C;

    Mem1 = A;
    A = B;
    Mem2 = C;
    B = Mem2;
    C = Mem1;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
}
void Fourth()
{
    double x, y;
    cout << "Enter x\n";
    cin >> x;
    y = 3 * (x * x * x * x * x * x) - 6 * (x * x) - 7;
    cout << "y = " << y << endl;
}
void Fifth()
{
    double x, y, a;
    cout << "Enter x\n";
    cin >> x;
    a = x - 3;
    y = 4 * (a * a * a * a * a * a) - 7 * (a * a * a) + 2;
    cout << "y = " << x << endl;
}
void Sixth()
{
    double A, AA;
    cout << "Enter A" << endl;
    cin >> A;
    AA = A * A;
    A = AA * AA * AA * AA;
    cout << "A = " << A << endl;
}
void Seventh()
{
    double A, AA, AAA;
    cout << "Enter A" << endl;
    cin >> A;
    AA = A * A;
    AAA = AA * A;
    A = AAA * AAA * AAA * AA * AA * AA;
    cout << "A = " << A << endl;
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
            << "1) Swap the contents of the number A and B\n"
            << "2) Swap the contents: from A to B, from B to C, from C to A.\n"
            << "3) Swap the contents: from A to C, from C to B, from B to A.\n"
            << "4) Find the Value of the Function y = 3x^6 - 6x^2 - 7 for a given value of x.\n"
            << "5) Find the Value of the Function y = 4(x−3)^6 − 7(x−3)^3 + 2 for a given value of x.\n"
            << "6) Given a number A. Calculate A ^ 8 using an auxiliary variable and three multiplications.\n"
            << "7) Given a number A. Calculate A ^ 15 using two auxiliary variables and five multiplication operations.\n";
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
        else if (ExNum == 7)
        {
            Seventh();
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