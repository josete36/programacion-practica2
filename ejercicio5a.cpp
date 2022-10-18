#include <iostream>

using namespace std;

int main()
{
    int num, num2, suma = 0;

    cout << "Enter num: ";
    cin >> num;
    
    if (num > 1)
    {
        num2 = num - 1; 
        while (num2 >= 1)
        {
            if (num % num2 == 0)
            {
                suma = suma + num2;
                num2--;
            }
            else
                num2--;
        }
    cout << suma << endl;
    }
    return 0;
}