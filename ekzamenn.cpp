#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    double a, sum = 0.;

    ifstream in("ekzamen.txt");

    if (in.is_open())
    {
        while (in >> a)
        {
            sum += round(a * 10.) / 10.;
        }
        in.close();
    }
    else cout << "Невозможно открыть файл\n";

    cout << "sum=" << sum << "\n";

    system("pause");
    return 0;
}