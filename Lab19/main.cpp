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
            string* B = new string[stoi(N)];

            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //operations
            int j = 0;
            for (int i = 0; i < stoi(N); i++)
            {
                if (A[i] != A[i + 1])
                {
                    B[j++] = A[i];
                }
            }

            //output
            cout << "New elements of B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << B[i] << endl;
            }

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
    cout << "Enter length (N)\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            int* B = new int[stoi(N)]; //calculator of repetitions
            string* D = new string[stoi(N)]; //array of elements to delete
            string* Final = new string[stoi(N)]; //Final Array

            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //copy A in AA
            string* AA = new string[stoi(N)];
            for (int i = 0; i < stoi(N); i++) {
                AA[i] = A[i];
            }

            //B is calculator
            for (int i = 0; i < stoi(N); i++) {
                B[i] = 0;
            }

            //sort
            for (int i = 0; i < stoi(N); i++) {
                for (int j = 0; j < stoi(N) - 1; j++) {
                    if (stod(A[j]) > stod(A[j + 1])) {
                        string a = A[j];
                        A[j] = A[j + 1];
                        A[j + 1] = a;
                    }
                }
            }

            //calculating B
            int counter = 0;
            for (int i = 0; i < stoi(N); i++)
            {
                if (A[i] == A[i + 1])
                {
                    counter++;
                }
                else
                {
                    counter = 0;
                }
                B[i] = counter;
            }

            //writing to D
            for (int i = 0; i < stoi(N); i++){ 
                if ((B[i] == 1) and (B[i + 1] == 0)) {
                    D[i] = A[i];
                }
                else {
                    D[i] = "void element of array D";
                }
            }

            //Creating Final array
            int ii = 0;
            bool trigger = 0;
            for (int i = 0; i < stoi(N); i++) {
                for (int j = 0; j < stoi(N); j++) {
                    if (AA[i] == D[j]) {
                        trigger = 1;
                    }
                }
                if (trigger == 1) {
                    ii--;
                }
                else {
                    Final[ii] = AA[i];
                }
                ii++;
                trigger = 0;
            }

            //output
            cout << "Length of  new array: " << ii << endl;
            cout << "Elements of new array:\n";
            for (int i = 0; i < ii; i++) {
                cout << Final[i] << endl;
            }

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
        cout << "\nIncorrect data. Integers please.\n\n";
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
            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //finding max and min
            double max = -100000000;
            double min = 100000000;
            int imax = 0;
            int imin = 0;
            for (int i = 0; i < stoi(N); i++) {
                if (stod(A[i]) > max) {
                    max = stod(A[i]);
                    imax = i;
                }
                if (stod(A[i]) < min) {
                    min = stod(A[i]);
                    imin = i;
                }
            }

           
            //create B
            string* B = new string[stoi(N)+2];
            bool trigger = 0;
            int j = 0;
            if (imax > imin) {
                for (int i = 0; i < imin; i++) {
                    B[i] = A[i];
                }
                B[imin] = "0";
                for (int i = imin + 1; i < imax + 1; i++) {
                    B[i] = A[i-1];
                }
                B[imax + 1] = A[imax];
                B[imax + 2] = "0";
                for (int i = imax + 3; i < stoi(N) + 2; i++) {
                    B[i] = A[i - 2];
                }
            }
            else {
                for (int i = 0; i <= imax; i++) {
                    B[i] = A[i];
                }
                B[imax + 1] = "0";
                for (int i = imax + 2; i < imin + 1; i++) {
                    B[i] = A[i - 1];
                }
                B[imin + 1] = "0";
                for (int i = imin + 2; i < stoi(N) + 2; i++) {
                    B[i] = A[i - 2];
                }
            }


            //output
            cout << "\nElements of B:\n";
            for (int i = 0; i < stoi(N) + 2; i++) {
                cout << B[i] << endl;
            }

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
    int Res;
    cout << "Enter length of A (N):\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //calculating negative numbers
            int neg = 0;
            for (int i = 0; i < stoi(N); i++) {
                if (stod(A[i]) < 0) {
                    neg++;
                }
            }


            //create B
            string* B = new string[stoi(N) + neg];
            bool trigger = 0;
            int j = 0;
            for (int i = 0; i < stod(N) + neg; i++) {
                if (trigger == 0) {
                    B[i] = A[j];
                    if (stod(A[j]) < 0) {
                        trigger = 1;
                        j--;
                    }
                }
                else {
                    B[i] = "0";
                    trigger = 0;
                }
                j++;
            }


            //output
            cout << "\nElements of B:\n";
            for (int i = 0; i < stoi(N) + neg; i++) {
                cout << B[i] << endl;
            }

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

        //counting positives
        int pos = 0;
        for (int i = 0; i < stoi(N); i++) {
            if (stod(A[i]) > 0) {
                pos++;
            }
        }

        //create B
        string* B = new string[stoi(N) + pos];
        int j = 0;
        for (int i = 0; i < stoi(N); i++) {
            if (stod(A[i]) > 0) {
                B[j] = "0";
                j++;
                B[j] = A[i];
                j++;
            }
            else {
                B[j] = A[i];
                j++;
            }
        }

        //output
        cout << "\nNew array: \n";
        for (int i = 0; i < stoi(N) + pos; i++) {
            cout << B[i] << endl;
        }
        delete[] B;
        delete[] A;
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
            << "   1) Remove all adjacent identical elements from the array, leaving their first occurrences.\n"
            << "   2) Remove from the array all elements that occur exactly twice, and print the size of the resulting array and its contents.\n"
            << "   3) Insert 0 before the minimum and after the maximum element of the array.\n"
            << "   4) Insert 0 after each negative array element.\n"
            << "   5) Insert 0 before each positive array element.\n";
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