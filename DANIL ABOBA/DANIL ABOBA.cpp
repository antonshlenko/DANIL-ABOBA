/*
дз за 5.06.21

Задания для самостоятельной работы 1
задание 2

#include <iostream>
#include <ctime>
using namespace std;
const int SIZE = 10;

void Set(int array[])
{
    for (int i = 0; i < SIZE; i++A)
        array[i] = rand() % 20 - 10;
}

void Print(int array[])
{
    cout << " Array" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}
void Sort(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = size / 2 + 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j > size / 2 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void main()
{
    srand((int)time(0));
    int a[SIZE];
    Set(a);
    Print(a);
    cout << "REZULTAT" << endl;
    Sort(a, 10);
    cout << endl;

}

Задания для самостоятельной работы 2
задание 1

#include <iostream>

using namespace std;

constexpr inline
signed long power(signed const& i, size_t n)
{
    return n ? power(i, --n) * i : 1;
}

int main()
{
    cout << power(-2, 5) << endl;

    system("pause");
}

задание 2

#include <iostream>
using namespace std;

using namespace std;

void outputStars(int);

int main()
{
    outputStars(5);
    return 0;
}

void outputStars(int num)
{
    if (num == 1)
    {
        return;
    }

    outputStars(--num);

    for (int i = 0; i < num; i++)
    {
        cout << "*";
    }

     cout << endl;
}



задание 3
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int summa (int a, int b) {

    if (b == a-1) return 0;
    return b + summa(a, b-1);
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b;
    cout << "Введите 1-ое число: ";
    cin >> a;
    cout << "Введите 2-ое число: ";
    cin >> b;

    cout << summa(a, b);

    return 0;
}


задание 4
#include <iostream>
#include <random>
#include <chrono>
#include <cstdlib>

using namespace std;

int min10(int a[100], int n, int& p)
{
    int s = 0;
    for (int i = n; i < n + 10; ++i) s += a[i];
    cout << "n: " << n << "; s: " << s << endl;
    if (100 - n == 10)
    {
        p = n;
        return s;
    }
    else
    {
        int s1 = min10(a, n + 1, p);
        if (s <= s1)
        {
            p = n;
            return s;
        }
        else return s1;
    }
}

int main()
{
    int a[100];
    int p;

    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> rnd(-100, 100);

    for (int i = 0; i < 100; ++i) a[i] = rnd(generator);
    for (int i = 0; i < 100; ++i) cout << a[i] << '\t';
    cout << endl << endl;

    min10(a, 0, p);

    cout << "Minimum position: " << p << endl << endl;

    system("pause");
}*/


