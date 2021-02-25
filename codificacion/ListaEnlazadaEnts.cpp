#include <cstdlib>
#include <iostream>
#include <string>
#include "ListaEnlazadaEnts.h"

using namespace std;

    ListaEnlazadaEnts::ListaEnlazadaEnts()
    {
        limpiarLista();
    }

    void ListaEnlazadaEnts::anadirAlPrincipio(int numero){        
        NodoEnts *nuevoNodo = new NodoEnts(numero, primerNodo);//SI fuera un nodo "contenido" debeerí solo colocarse > Nodo nombreVar (param1, param2..) esto tendría que hacerse para cuando no sea con el que se requiere navegar ,por lo cual no requiere de ser un puntero, sino un nodo normal...       
        primerNodo = nuevoNodo;
        tamanio++;
    }

     void ListaEnlazadaEnts::anadirAlFinal(int numero){
        if(estaVacia()){
            primerNodo = new NodoEnts(numero, NULL);
            ultimoNodo = primerNodo;
        }else{
            NodoEnts *siguiente = ultimoNodo->obtenerElSiguiente();
            siguiente = new NodoEnts(numero, NULL);
            tamanio++;
        }
    }

    void ListaEnlazadaEnts::limpiarLista(){//por el hecho de que puede haber más de un nodo, al momento de querer limpiarla, entonces mejor se procederá ha hacer un for
        if(tamanio!=0){
            NodoEnts *nodoAuxiliar = primerNodo;

            for (int nodoActual = 2; nodoActual < tamanio; nodoActual++)
            {
                NodoEnts *nodoSubAuxiliar = nodoAuxiliar;//con el fin de no perder la referencia, para así limpiarla...
                nodoAuxiliar = nodoAuxiliar->obtenerElSiguiente();
                delete nodoSubAuxiliar;
            }//for por medio del cual liberameos la memoria hasta el penúltimo nodo...                       

            delete nodoAuxiliar;//se libera el espacio del penúltimo Nodo...
            delete ultimoNodo;
            tamanio = 0;
        }        
    }

    int ListaEnlazadaEnts::darTamanio(){
        return tamanio;
    }


    bool ListaEnlazadaEnts::estaVacia(){
        if(tamanio==0){//lo hice así porque no se si al igual que java, detectaría como pregunta una expre entre () directamente en el return...
            return true;
        }
        return false;
    }

    NodoEnts* ListaEnlazadaEnts::darPrimerNodo(){
        return primerNodo;
    }

    NodoEnts* ListaEnlazadaEnts::darUltimoNodo(){
        return ultimoNodo;
    }
