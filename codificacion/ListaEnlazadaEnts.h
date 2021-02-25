#include <cstdlib>
#include <iostream>
#include <string>
#include "NodoEnts.h"

using namespace std;
class ListaEnlazadaEnts{
    private:
        int tamanio;
        NodoEnts *primerNodo;
        NodoEnts *ultimoNodo;

    public:
        ListaEnlazadaEnts();
        void anadirAlPrincipio(int);
        void anadirAlFinal(int);
        void limpiarLista();
        bool estaVacia();
        NodoEnts* darPrimerNodo();
        NodoEnts* darUltimoNodo();
        int darTamanio();
};