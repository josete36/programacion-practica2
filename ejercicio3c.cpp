#include <iostream>

using namespace std;

const float gApple = 675.0;
const float gButter = 75.0;
const float gSugar = 150.0;
const float gBread = 100.0;
const float mlMilk = 150.0;

int main()
{
    float apple, butter, sugar, bread, milk;
    int people;

    cout << "How many people will eat cake?: ";
    cin >> people;

    while (people > 0)
    {
        apple = gApple * people / 4;
        butter = gButter * people / 4;
        sugar = gSugar * people / 4;
        bread = gBread * people / 4;
        milk = mlMilk * people / 4;
    
        cout << "For " << people << " people it will take: " << endl;
        cout << apple << " gr Apple" << endl;
        cout << butter << " gr Butter" << endl;
        cout << sugar << " gr Sugar" << endl;
        cout << bread << " gr Bread" << endl;
        cout << milk << " ml Milk" << endl;

        if (sugar >= 1000.0)
            cout << "It takes more than 1kg of sugar" << endl << endl;

        cout << "How many people will eat cake?: ";
        cin >> people;
    }
    return 0;


}