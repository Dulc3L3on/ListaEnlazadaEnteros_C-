#include <cstdlib>
#include <iostream>
#include <string>
#include "ListaEnlazadaEnts.h"

using namespace std;

typedef ListaEnlazadaEnts* ListaEnlazada;
typedef NodoEnts *Nodo;

int main(int argc, char** argv){//Recuerda que todos los moldes que crees para crear objetos, son *, solo que en Java se encarga de hacer la simplif por nosotros
    ListaEnlazada listaEnlazadaEnteros = new ListaEnlazadaEnts();

    for (int numero = 0; numero < 10; numero++)
    {
        listaEnlazadaEnteros->anadirAlFinal(numero+1);
    }
    
    Nodo nodoAuxiliar = listaEnlazadaEnteros->darPrimerNodo();
    for (int elementoActual = 0; elementoActual < listaEnlazadaEnteros->darTamanio(); elementoActual++)//tampoco olvides que para hacer referencia a los métodos o axn de los punteors, debes usar "->"
    {
        cout<<"Numero --> "<<nodoAuxiliar->darContenido()<<endl;
        nodoAuxiliar = nodoAuxiliar->obtenerElSiguiente();
    }
    return 0;
}