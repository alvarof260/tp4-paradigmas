#include <iostream>
#include "Pelicula.h"
using namespace std;

int main()
{
    Pelicula pelicula1(245, "El origen", "Christopher Nolan", true, 10.0, 'I');
    Pelicula pelicula2(457, "Titanic", "James Cameron", false, 8.0, 'N');

    // Listar información de las películas
    cout << "Información de la película 1:" << endl;
    pelicula1.listarInformacion();
    cout << "Costo de la película 1: $" << pelicula1.calcularCosto() << endl;

    cout << endl;

    cout << "Información de la película 2:" << endl;
    pelicula2.listarInformacion();
    cout << "Costo de la película 2: $" << pelicula2.calcularCosto() << endl;

    return 0;
}