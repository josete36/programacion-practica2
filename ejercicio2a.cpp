#include <iostream>

using namespace std;

int main()
{
    int num;
    int count = 0;

    cout << "Enter number: ";
    cin >> num;

    if(num == 0){
        count = 1;
    }
    while(num != 0){
        num /= 10;
        count++;
    }
    cout << "The number of digits is: " << count << endl;
}