#include <iostream>
#include "Pelicula.h"
#include <string>
using namespace std;

int Pelicula::autonumerico = 0;

Pelicula::Pelicula(int codigo, string titulo, string director, bool estreno,
                   float precioBase, char tipoPelicula)
{
    this->autonumerico++;
    this->codigo = codigo;
    this->titulo = titulo;
    this->director = director;
    this->estreno = estreno;
    this->precioBase = precioBase;
    this->tipoPelicula = toupper(tipoPelicula);
}

void Pelicula::listarInformacion()
{
    cout << "Codigo: " << codigo << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Director: " << director << endl;
    cout << "Estreno: " << (estreno ? "Sí" : "No") << endl;
    cout << "Precio Base: $" << precioBase << endl;
    cout << "Tipo de Pelicula: " << (tipoPelicula == 'I' ? "Internacional" : "Normal") << endl;
}

float Pelicula::calcularCosto()
{
    float costo = precioBase;

    if (tipoPelicula == 'I')
    {
        costo *= 1.30;
    }
    else if (!estreno)
    {
        costo *= 0.80;
    }

    return costo;
}