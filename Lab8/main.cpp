#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    string I;
    int i;
    cout << "Enter file size in bytes\n";
    try
    {
        cin >> I;
        i = stod(I) /  1024;
        cout << i << " Kilobytes\n\n";
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Second()
{
    string A, B;
    int Res;
    cout << "You need to enter A and B\n";
    try
    {
        cout << "Enter A: ";
        cin >> A;
        cout << "Enter B: ";
        cin >> B;
        Res = stod(A) / stod(B);
        cout << "answer: " << Res << endl << endl;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }

}
void Third()
{
    string A, B;
    int Res;
    cout << "You need to enter A and B\n";
    try
    {
        cout << "Enter A: ";
        cin >> A;
        cout << "Enter B: ";
        cin >> B;
        Res = stoi(A) - ((stoi(A) / stoi(B)) * stoi(B));
        cout << "Answer: " << Res << endl << endl;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fourth()
{
    string i;
    try
    {
        cout << "\nEnter number: ";
        cin >> i;
        if ((stoi(i) < 10) or (stoi(i) > 99))
        {
            cout << "\nIncorrect data";
        }
        else
        {
            reverse(i.begin(), i.end());
            cout << "Answer: " << i << endl << endl;
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
        cout << "\nEnter number: ";
        cin >> i;
        if ((stoi(i) < 100) or (stoi(i) > 999))
        {
            cout << "\nIncorrect data\n\n";
        }
        else
        {
            Res = stoi(i) % 100 ;
            cout << "Answer: " << Res << stoi(i) / 100 << endl << endl;
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
            << "   1) Bytes to Kilobytes\n"
            << "   2) Find the number of line segments B located on line segment A.\n"
            << "   3) Find remaining length of A\n"
            << "   4) Permutation of the digits of a two-digit number\n"
            << "   5) The first digit on the left side of three-digit number was deleted and assigned to the right.\n";
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