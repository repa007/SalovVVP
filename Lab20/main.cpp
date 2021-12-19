#include <iostream>
#include <cmath>
#include <math.h>
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
            int len = stoi(N);

            //enter A
            string* A = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //calculating len
            for (int i = 0; i < stoi(N); i++) {
                if (A[i] == A[i + 1]) {
                    len--;
                }
            }

            int* B = new int[len];
            string* C = new string[len];
            int j = 0;
            int l = 1;
            for (int i = 0; i < stoi(N); i++) {
                if (A[i] == A[i + 1]) {
                    l++;
                }
                else {
                    C[j] = A[i];
                    B[j] = l;
                    l = 1;
                    j++;
                }
            }


            //output
            cout << "Array B:\n";
            for (int i = 0; i < len; i++) {
                cout << B[i] << endl;
            }
            cout << "Array C:\n";
            for (int i = 0; i < len; i++) {
                cout << C[i] << endl;
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
    try
    {
        string n, l;
        cout << "Enter L: ";
        cin >> l;
        cout << "Enter N: ";
        cin >> n;
        if (stoi(n) > 1)
        {
            double* a = new double[stoi(n)];
            double* b = new double[stoi(n)];

            int i;
            for (i = 0; i < stoi(n); ++i) {
                string tmp;
                cin >> tmp;
                a[i] = stod(tmp);
            }

            int i2 = -1, len = 1, i3, endn = stoi(n);

            for (i = 1; i < stoi(n); ++i) {
                if (a[i - 1] != a[i]) {
                    if (len > stoi(l)) {
                        b[++i2] = 0;
                        endn -= len - 1;
                    }
                    else {
                        for (i3 = 0; i3 < len; ++i3) b[++i2] = a[i - 1];
                    }             len = 0;
                }         ++len;
            }       if (len > stoi(l)) {
                b[++i2] = 0;
                endn -= len - 1;
            }
            else {
                for (i3 = 0; i3 < len; ++i3) b[++i2] = a[i - 1];
            }

            for (i = 0; i < endn; ++i) a[i] = b[i];

            cout << "New array:";
            for (i = 0; i < endn; ++i) {
                cout << a[i] << endl;
            }
            delete[] a;
            delete[] b;
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
        cout << "Enter K\n";
        string K;
        cin >> K;
        cout << "Enter N\n";
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter starting array
            string* Starting = new string[stoi(N)];
            cout << "Enter elements of A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> Starting[i];
            }

            //finding K-serie
            int k = 0;
            int starti = 0; 
            int endi = 0;

            int i = 0;
            while (i < stoi(N)) {
                k++;
                int ii = i;
                while (Starting[i] == Starting[ii + 1]) {
                    ii++;
                    if (ii == stoi(N)) {
                        break;
                    }
                }
                if (k == stoi(K)) {
                    starti = i;
                    endi = ii;
                }
                i = ii;
                i++;
            }
            //finding last-serie
            int lstarti = 0;
            int lendi = 0;

            int j = 0;
            while (j < stoi(N)) {
                int ii = j;
                while (Starting[j] == Starting[ii + 1]) {
                    ii++;
                    if (ii == stoi(N)) {
                        break;
                    }
                }
                lstarti = j;
                lendi = ii;
                j = ii;
                j++;
            }

            //copy Starting in Reserve
            string* Reserve = new string[stoi(N)];
            for (int i = 0; i < stoi(N); i++) {
                Reserve[i] = Starting[i];
            }


            //create Result
            string* Result = new string[stoi(N)];

            for (int l = 0; l < starti; l++) {
                Result[l] = Starting[l];
            }
            for (int l = 0; l <= lendi - lstarti; l++) {
                Result[l + starti] = Starting[l + lstarti];
            }
            for (int l = 0; l < lstarti - endi - 1; l++) {
                Result[l + lendi - lstarti + starti + 1] = Starting[endi + l + 1];
            }
            for (int l = 0; l < lstarti - endi - 1; l++) {
                Result[l + lendi - lstarti + starti + 1] = Starting[endi + l + 1];
            }
            for (int l = 0; l <= endi - starti; l++) {
                Result[l + lendi - lstarti + starti + 1 + lstarti - endi - 1] = Starting[starti + l];
            }
            
            //output
            cout << "New array:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << Result[i] << endl;
            }
            
            delete[] Starting;
            delete[] Reserve;
            delete[] Result;
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
    cout << "Enter number of points (N):\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            float** arr = new float* [stoi(N)];
            for (int count = 0; count < stoi(N); count++)
                arr[count] = new float[2];

            for (int i = 0; i < stoi(N); i++) {
                cout << "x: ";
                cin >> arr[i][0];
                cout << "y: ";
                cin >> arr[i][1];
                cout << endl;
            }

            cout << "Points:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << arr[i][0] << "; " << arr[i][1] << endl;
            }

            //calculating
            float len = 0;
            float x = 0;
            float y = 0;
            for (int i = 0; i < stoi(N); i++) {
                if ((arr[i][0] < 0) and (arr[i][1] > 0)) {
                    if (sqrt(arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1]) > len) {
                        x = arr[i][0];
                        y = arr[i][1];
                        len = sqrt(arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1]);
                    }
                }
            }

            //output
            cout << "\nElements of B:\n";
            cout << "(" << x << ";" << y << ")\n\n";

            delete[] arr;
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
        cout << "N: ";
        cin >> N;
        if (stoi(N) > 1) {
            float** arr = new float* [stoi(N)];
            for (int count = 0; count < stoi(N); count++) {
                arr[count] = new float[2];
            }

            //enter A
            int i;
            cout << "Enter points: ";
            for (i = 0; i < stoi(N); ++i) {
                cout << "\nPoint " << i + 1 << endl;
                cout << "  x: ";
                cin >> arr[i][0];
                cout << "  y: ";
                cin >> arr[i][1];
            }

            int p1, p2, p3, i2, i3;
            float p, pmax = 0;

            for (i = 0; i < stoi(N); ++i) {
                for (i2 = i + 1; i2 < stoi(N); ++i2) {
                    for (i3 = i2 + 1; i3 < stoi(N); ++i3) {
                        p = 0;
                        p += sqrt(pow(arr[i][0] - arr[i2][0], 2) + pow(arr[i][1] - arr[i2][1], 2));
                        p += sqrt(pow(arr[i][0] - arr[i3][0], 2) + pow(arr[i][1] - arr[i3][1], 2));
                        p += sqrt(pow(arr[i2][0] - arr[i3][0], 2) + pow(arr[i2][1] - arr[i3][1], 2));
                        if (p > pmax) {
                            p1 = i;
                            p2 = i2;
                            p3 = i3;
                            pmax = p;
                        }
                    }
                }
            }

            //output
            cout << "Perimeter = " << pmax << endl;
            cout << "Numbers of points: " << p1 + 1 << ", " << p2 + 1 << ", " << p3 + 1 << endl << endl;
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
    setlocale(LC_ALL, "Russian");
    while (true) {
        int ExNum;
        cout << "   Choose number of exercise (enter 0 to exit)\n"
            << "   1) Дан целочисленный массив A размера N. Назовем серией группу подряд идущих одинаковых элементов,\n"
            << "      а длиной серии — количество этих элементов (длина серии может быть равна 1). \n"
            << "      Сформировать два новых целочисленных массива B и C одинакового размера, \n"
            << "      записав в массив B длины всех серий исходного массива, а в массив C — значения элементов, образующих эти серии.\n"
            << "   2) Дано целое число L (> 0) и целочисленный массив размера N. Заменить каждую серию массива,\n"
            << "      длина которой больше L, на один элемент с нулевым значением\n"
            << "   3) Дано целое число K (> 0) и целочисленный массив размера N. \n"
            << "      Поменять местами последнюю серию массива и его серию с номером K  \n"
            << "   4) Дано множество A из N точек (точки заданы своими координатами x, y). \n"
            << "      Среди всех точек этого множества, лежащих во второй четверти, найти точку,  \n"
            << "      наиболее удаленную от начала координат. Если таких точек нет, то вывести точку с нулевыми координатами. \n"
            << "   5) Дано множество A из N точек (N > 2, точки заданы своими координатами x, y). \n"
            << "      Найти наибольший периметр треугольника, вершины которого принадлежат различным точкам множества A, \n"
            << "      и сами эти точки (точки выводятся в том же порядке, в котором они перечислены перечислены при задании множества A). \n";
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