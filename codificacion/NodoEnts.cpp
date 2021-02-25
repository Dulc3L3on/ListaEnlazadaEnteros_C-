#include <cstdlib>
#include <iostream>
#include "NodoEnts.h"

using namespace std;

    NodoEnts::NodoEnts(int elContenido, NodoEnts *elNodoSiguiente)//recuerd que en las definiciones de los métodos sí debes colocar la clase a la cual pertenecen, sea que seencuentrene en el mismo archivo de las "declaraciones" o no
    {
        contenido = elContenido;
        nodoSiguiente = elNodoSiguiente;
    }

    NodoEnts* NodoEnts::obtenerElSiguiente(){
        return nodoSiguiente;
    }

    int NodoEnts::darContenido(){
        return contenido;
    }

