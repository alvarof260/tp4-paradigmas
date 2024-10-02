#include <iostream>
using namespace std;

class Pelicula
{
    static int autonumerico;
    int codigo;
    string titulo;
    string director;
    bool estreno;
    float precioBase;
    char tipoPelicula;

public:
    Pelicula(int codigo, string titulo, string director, bool estreno,
             float precioBase, char tipoPelicula);
    void listarInformacion();
    float calcularCosto();
};