// Варіант 25(Рекурсивний спосіб)
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

template<typename T>
void Init(T* b, const int n, int i = 0)
{
    if (i < n)
    {
        b[i] = -10 + rand() % 21;
        Init(b, n, i + 1);
    }
}
template<typename T>
void Print(T* b, const int n, int i = 0)
{
    if (i == 0) cout << "{ ";
    if (i < n)
    {
        cout << b[i];
        if (i < n - 1) cout << ", ";
        Print(b, n, i + 1);
    }
    else if (i == n) cout << " }";
}
template<typename T>
int SumEven(T b[], const int n, int i = 0)
{
    if (i < n)
    {
        if (b[i] % 2 == 0)
            return b[i] + SumEven(b, n, i + 1);
        else
            return SumEven(b, n, i + 1);
    }
    else
        return 0;
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));
    int n;
    cout << "n = ";
    cin >> n;
    int* b = new int[n];

    Init(b, n);

    cout << "Array: ";
    Print(b, n);
    cout << endl;

    int sum = SumEven(b, n);
    cout << "The sum of even elements: " << sum << endl;

    delete[] b;
    b = nullptr;
    return 0;
}