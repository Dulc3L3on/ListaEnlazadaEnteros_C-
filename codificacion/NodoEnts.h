#include <cstdlib>
#include <iostream>

using namespace std;
class NodoEnts{
    private :
        NodoEnts *nodoSiguiente;
        int contenido;

    public:
        NodoEnts(int, NodoEnts*);       
        NodoEnts* obtenerElSiguiente();
        int darContenido();
};