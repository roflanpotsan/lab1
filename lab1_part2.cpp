#include <iostream>
using namespace std;

int main()
{
    cout << "Lab 1 Part 2 Var 4" << endl;

    double weight, height;

    cout << "Input:" << endl;

    cout << "height = ";
    cin >> height;

    cout << "weight = ";
    cin >> weight;

    if (height > 0 && weight > 0)
    {
        if (weight > height - 100) cout << "Хорошо бы Вам похудеть." << endl;
        else cout << "Ваш вес в норме." << endl;
    }
    else cout << "Weight and height must be greater than 0." << endl;

    return 0;
}