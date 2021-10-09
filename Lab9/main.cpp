#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    string I;
    int i;
    cout << "Enter time in sec.\n";
    try
    {
        cin >> I;
        i = stoi(I) % 60;
        cout << i << " sec.\n\n";
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Second()
{
    string K;
    int Res;
    cout << "You need to enter number of day of year (K)\n";
    try
    {
        cin >> K;
        if ((stoi(K) > 365) or (stoi(K) < 1))
        {
            cout << "\nIncorrect data\n\n";
        }
        Res = stoi(K) % 7;
        cout << "Number of day of week: " << Res << endl << endl;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }

}
void Third()
{
    string K, N;
    int Res;
    try
    {
        cout << "Enter K\n";
        cin >> K;
        cout << "Enter N\n";
        cin >> N;
        if ((stoi(K) > 365) or (stoi(K) < 1) or (stoi(N)>7) or (stoi(N)<0))
        {
            cout << "\nIncorrect data\n\n";
        }
        Res = (stoi(K)+stoi(N)-1) % 7;
        cout << "Number of day of week: " << Res << endl << endl;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fourth()
{
    string A, B, C;
    int N, S;
    try
    {
        cout << "\nEnter A: ";
        cin >> A;
        cout << "\nEnter B: ";
        cin >> B;
        cout << "\nEnter C: ";
        cin >> C;
        if ((stoi(A) < 0) or (stoi(B) < 0) or (stoi(C) < 0))
        {
            cout << "\nIncorrect data";
        }
        else
        {
            N = (stoi(A) * stoi(B)) / stoi(C);
            S = (stoi(A) * stoi(B)) % stoi(C);
            cout << "\nNumber of squares: " << N << endl;
            cout << "S of void: " << S << endl << endl;
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fifth()
{
    string i;
    int Res;
    try
    {
        cout << "\nEnter year: ";
        cin >> i;
        if ((stoi(i) < 0))
        {
            cout << "\nIncorrect data\n\n";
        }
        else
        {
            Res = stoi(i) / 100 + 1;
            if (stoi(i) % 100 == 0) { Res--; }
            cout << "Century: " << Res << endl << endl;
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}

void Error()
{
    cout << "incorrect number\n" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "   Choose number of exercise (enter 0 to exit)\n"
            << "   1) Find the number of seconds since the beginning of the last minute. (Sunday - 0, Saturday - 6).\n"
            << "   2) Determine the day of the week for the K-th day of the year. January 1st was Monday. (Monday - 1, Sunday - 7).\n"
            << "   3) Determine the day of the week for the K-th day of the year. January 1st was N-th day of week\n"
            << "   4) Find the number of squares (C*C) on the rectangle (A*B) and the area of the unoccupied part of the rectangle.\n"
            << "   5) Determine centuty of year\n";
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