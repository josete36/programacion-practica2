#include <iostream>

using namespace std;

int main()
{
    int num;
    int suma = 0;
    float media = 0;
    int i = 0;

    cout << "Enter a natural number: ";
    cin >> num;

    while (num > 0)
    {
        suma += num;
        i++;
        cout << "Enter other natural number: ";
        cin >> num;
    }
    media = float(suma) / float(i);
    cout << "La media es: " << media << endl;

}