#include <iostream>

using namespace std;

int main()
{
    int num, i, count = 0;              //la variable cont es para contar si es divisible por si mismo y por la unidad, si hay otro valor por el que el resto sea 0, count = 3 y entonces no es primo.

    cout << "Enter num: ";
    cin >> num;

    i = num;
    while(i >= 1 && count <= 2)
    {
        if(num % i == 0 && num % 1 == 0) //si se cumple esta condicion la variable contador aumentará
            count++;
        i--;
    }
    if (count == 2)                      
        cout << "es primo" << endl;
    else
        cout << "No es primo" << endl;
    return 0;
}