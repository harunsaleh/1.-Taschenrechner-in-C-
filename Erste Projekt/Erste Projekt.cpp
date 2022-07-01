//Mein erster Taschenrechner programmiert in C++. Bestimmt nicht die beste Lösung, aber schon mal einen Anfang :)) LG #Harun

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Willkommen im Taschorechnometro 30000! \n";
    cout << "Bitte geben Sie die erste Zahl ein! \n";
    double zahl1;
    cin >> zahl1;

    cout <<"Bitte gib den Operator ein (+,-,/,*) \n";
    char op;
    cin >> op;

    cout << "Bitte geben Sie die zweite Zahl ein! \n";
    double zahl2;
    cin >> zahl2;

    double ergebnis;

    switch (op)
    {
    case '+':
        ergebnis = zahl1 + zahl2;
        cout << ergebnis;
        break;
    case '-':
        ergebnis = zahl1 - zahl2;
        cout << ergebnis;
        break;
    case '*':
        ergebnis = zahl1 * zahl2;
        cout << ergebnis;
        break;
    case '/':
        ergebnis = zahl1 / zahl2;
        cout << ergebnis;
        break;
    default: cout << "Operator ist nicht vorhanden!";
        break;
    }
}

