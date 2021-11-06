#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    cout << "Enter length (N)\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            string* C = new string[stoi(N)];

            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //enter B
            string* B = new string[stoi(N)];
            cout << "Enter elements of B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> B[i];
            }

            //changing
            for (int i = 0; i < stoi(N); i++) {
                C[i] = B[i];
                B[i] = A[i];
                A[i] = C[i];
            }

            //output
            cout << "\nNew elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << A[i] << endl;
            }
            cout << "New elements of B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << B[i] << endl;
            }

            delete[] C;
            delete[] B;
            delete[] A;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Second()
{
    cout << "Enter length of A (N):\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            double* C = new double[stoi(N)];

            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //create C
            C[0] = stod(A[0]);
            for (int i = 1; i < stoi(N); i++) {
                C[i] = C[i - 1] + stod(A[i]);
            }

            //create B (finaly)
            double* B = new double[stoi(N)];
            for (int i = 0; i < stoi(N); i++) {
                B[i] = C[i] / (i + 1);
            }

            //output
            cout << "\nElements of C:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << C[i] << endl;
            }
            cout << "\nElements of B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << B[i] << endl;
            }

            delete[] C;
            delete[] B;
            delete[] A;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }

    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }

}
void Third()
{
    int Res;
    cout << "Enter length of A (N):\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            double* C = new double[stoi(N)];

            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            double last = 0;
            for (int i = 0; i < stoi(N); i++) {
                if (stoi(A[i]) % 2 == 1) {
                    last = stoi(A[i]);
                }
            }
            //create B
            int* B = new int[stoi(N)];
            for (int i = 0; i < stoi(N); i++) {
                if (stoi(A[i]) % 2 == 1) {
                    B[i] = stoi(A[i]) + last;
                }
                else {
                    B[i] = stoi(A[i]);
                }
            }


            //output
            cout << "\nElements of B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << B[i] << endl;
            }

            delete[] C;
            delete[] B;
            delete[] A;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fourth()
{
    try
    {
        int N, ma = -10000, maxind = 0, mini = 100000, minind = 0;
        cout << "Enter length of A (N):\n";
        cin >> N;
        double* A = new double[N];
        double* F = new double[N];
        if (N > 1)
        {
            cout << "Enter elements of A:\n";
            for (int i = 0; i < N; i++)
            {
                cin >> A[i];
            }
            cout << endl;
            for (int i = 0; i < N; i++)
            {
                F[i] = A[i];
            }
            for (int i = 0; i < N; i++)
            {
                if (ma < A[i])
                {
                    ma = A[i];
                    maxind = i;
                }
            }
            for (int i = 0; i < N; i++)
            {
                if (mini > A[i])
                {
                    mini = A[i];
                    minind = i;
                }
            }
            for (int i = 0; i < N; i++)
            {
                A[i] = 0;
            }
            if (minind >= maxind)
            {
                int g = maxind;
                maxind = minind;
                minind = g;
            }
            for (int i = 0; i <= minind; i++)
            {
                A[i] = F[i];
            }
            for (int i = maxind; i < N; i++)
            {
                A[i] = F[i];
            }
            for (int i = 0; i < N; i++)
            {
                cout << A[i] << endl;
            }
        }
        else
        {
            cout << "Incorrect data\n";
        }
        delete[] A;
        delete[] F;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fifth()
{
    string N;
    cout << "Enter length of A (N):\n";
    cin >> N;
    if (stoi(N) > 1)
    {

        //enter A
        string* A = new string[stoi(N)];
        cout << "Enter elements of A:\n";
        for (int i = 0; i < stoi(N); i++) {
            cin >> A[i];
        }

        int I = rand() % stoi(N);
        cout << "\nNew place of first element : " << I + 1;

        //copy A in B
        double* B = new double[stoi(N)];
        for (int i = 0; i < I; i++) {
            B[i] = stoi(A[i + 1]);
        }
        B[I] = stod(A[0]);
        for (int i = I + 1; i < stoi(N); i++) {
            B[i] = stoi(A[i]);
        }

        //write B
        cout << "\nNew array:\n";
        for (int i = 0; i < stoi(N); i++) {
            cout << B[i] << endl;
        }

        //sort B
        for (int i = 0; i < stoi(N) - 1; i++) {
            for (int j = 0; j < stoi(N) - 1; j++) {
                if (B[j] > B[j + 1]) {
                    //переворот пар
                    double a = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = a;
                }
            }
        }
        //output
        cout << "\nSorted array: \n";
        for (int i = 0; i < stoi(N); i++) {
            cout << B[i] << endl;
        }
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
            << "   1) Swap the contents of the arrays A and B.\n"
            << "   2) Array B of arithmetic means from A.\n"
            << "   3) Increment all odd numbers in the array by the original value of the last odd number.\n"
            << "   4) Zero the elements of an array located between its minimum and maximum elements.\n"
            << "   5) Reorder the changed array in ascending order\n";
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
