#include <iostream>
using namespace std;

int main()

{
    int a=5,b,c,amount;

    cout << "Gave me a random number: ";

    cin >> b;

    cout << "Gave me another number: ";

    cin >> c;

    amount = a + b + c;

    cout << "Value of the three variable: " << amount << endl;

    return 0;
}