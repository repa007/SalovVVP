#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    try
    {
        string N, K, L;
        cout << "Enter length of A (N):\n";
        cin >> N;
        cout << "Enter K\n";
        cin >> K;
        cout << "Enter L\n";
        cin >> L;
        if ((stoi(N) > 1) and (stoi(K) < stoi(L)) and (stoi(L) < stoi(N)) and (stoi(K) >= 0))
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) 
            {
                cin >> A[i];
            }

            //finding...
            double sum = 0;
            int num = 0;
            for (int i = stoi(K) - 1; i <= stoi(L) - 1; i++)
            {
                sum = sum + stod(A[i]);
                num++;
            }
            double ar_mean = sum / num;

            //output
            cout << "Arithmetical mean = " << ar_mean << endl;
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
    try
    {
        string N;
        cout << "Enter length of A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //finding...
            double sum = 0;
            int num = 0;
            double* D = new double[stoi(N)]; //array of differance
            for (int i = 0; i < stoi(N) - 1; i++)
            {
                D[i] = stod(A[i + 1]) - stod(A[i]);
            }
            bool achtung = true;
            for (int i = 0; i < stoi(N); i++)
            {
                if (D[i] != D[i+1])
                {
                    achtung = false;
                }
            }

            //output
            if (achtung == false)
            {
                cout << "\n0\n";
            }
            else
            {
                cout << endl << D[1] << endl;
            }


            delete[] A;
            delete[] D;
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
    try
    {
        string N;
        cout << "Enter length of A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //finding...
            double min = 1000000;
            for (int i = 1; i < stoi(N); i+=2)
            {
                if (stod(A[i]) < min)
                {
                    min = stod(A[i]);
                }
            }

            //output
            cout << "Minimal is " << min << endl;


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
        string N;
        cout << "Enter length of A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //finding...
            int index = -1;
            if (stod(A[0]) > stod(A[1]))
            {
                index = 0;
            }
            for (int i = 1; i < stoi(N) - 1; i++)
            {
                if ((stod(A[i]) > stod(A[i - 1])) and (stod(A[i]) > stod(A[i + 1])))
                {
                    index = i;
                }
            }
            if (stod(A[stoi(N) - 1]) > stod(A[stoi(N) - 2])) 
            {
                index = stoi(N);
            }


            //output
            if (index >= 0)
            {
                cout << "Answer: " << index + 1 << endl;
            }
            else
            {
                cout << "There is no maximums\n";
            }

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
    try
    {
        string N;
        cout << "Enter length of A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //copy in B
            string* B = new string[stoi(N)];
            for (int i = 0; i < stoi(N); i++)
            {
                B[i] = A[i];
            }

            

            //sort
            for (int i = 0; i < stoi(N); i++) {
                for (int j = 0; j < stoi(N) - 1; j++) {
                    if (stod(A[j]) > stod(A[j + 1])) {
                        double a = stod(A[j]);
                        A[j] = A[j + 1];
                        A[j + 1] = to_string(a);
                    }
                }
            }

            //finding...
            double target = -100000000;
            for (int i = 0; i < stoi(N) - 1; i++)
            {
                if (stod(A[i]) == stod(A[i + 1]))
                {
                    target = stod(A[i]);
                }
            }
            
            if (target != -100000000)
            {
                cout << "Answers:\n";
            }
            for (int i = 0; i < stoi(N); i++)
            {
                if (target == stod(B[i])) 
                {
                    cout << i + 1 << endl;
                }
            }
            
            //output
            

            delete[] A;
            delete[] B;
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

void Error()
{
    cout << "incorrect number\n" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "   Choose number of exercise (enter 0 to exit)\n"
            << "   1) Find the arithmetic mean of the elements of an array with numbers from K to L, inclusive.\n"
            << "   2) If the elements of the array form an arithmetic progression,\n"
            << "      then output the difference of the progression, if not, output 0.\n"
            << "   3) Find the smallest even-numbered array element\n"
            << "   4) Find the number of the last local maximum.\n"
            << "   5) Find the numbers of identical elements and display these numbers in ascending order.\n";
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