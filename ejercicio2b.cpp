#include <iostream>

using namespace std;

int main()
{
    int num, rest = 0, addition = 0;
    int count = 0;

    cout << "Enter number: ";
    cin >> num;

    if(num == 0){
        count = 1;
    }
    while(num != 0){
        rest = num % 10;
        addition += rest;
        num /= 10;
    }
    cout << "The addition of digits is: " << addition << endl;
    return 0;
}