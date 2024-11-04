#include <iostream>
using namespace std;

int main()
{
    char nombre1[40], nombre2[40];
    int edad1, edad2;
    cout << "Ingrese nombre de la primera persona: ";
    cin.getline(nombre1, 40);
    cout << "Ingrese edad de la primera persona: ";
    cin >> edad1;
    cin.ignore(); 
    cout << "Ingrese nombre de la segunda persona: ";
    cin.getline(nombre2, 40);
    cout << "Ingrese edad de la segunda persona: ";
    cin >> edad2;
    cout << "\nNombre: " << nombre1 << "\n";
    cout << "Edad: " << edad1 << "\n";
    if (edad1 >= 18) {
        cout << "Es mayor de edad.\n";
    } else {
        cout << "No es mayor de edad.\n";
    }
    cout << "\nNombre: " << nombre2 << "\n";
    cout << "Edad: " << edad2 << "\n";
    if (edad2 >= 18) {
        cout << "Es mayor de edad.\n";
    } else {
        cout << "No es mayor de edad.\n";
    }
    return 0;
}

