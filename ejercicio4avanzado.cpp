/* He basado mi programa en hacer que si el numero 
es divisible por el mismo, cuento +1 y si es divisible 
por la unidad cuento +1,en total para que un numero sea 
primo la variable "count" debe ser igual a 2. Si hubiera
otro numero por el que fuera divisible, count = 3 y 
entonces no sería primo*/

#include <iostream>

using namespace std;

int main()
{
    int num, i, count = 0;                   //la variable cont es para contar si es divisible por si mismo y por la unidad, si hay otro valor por el que el resto sea 0, count = 3 y entonces no es primo.

    cout << "Enter num: ";
    cin >> num;
    while (num > 0)
    {
        i = num;
        while(i >= 1 && count <= 2)
        {
            if(num % i == 0 && num % 1 == 0) //si se cumple esta condicion la variable contador aumentará
                count++;
            i--;
        }
        if (count == 2)              
            cout << num << ", ";
        else
            count = 0;                       // Reinicializamos la variable contador a 0 de nuevo
            num = num - 1;
    }
    return 0;
}